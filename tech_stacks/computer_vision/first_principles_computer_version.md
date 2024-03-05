# First Principles of Computer Vison

## 1 Imaging: Image Formation, Sensing, Processing

### 1.1 Image Formation Overview

**Image: Projection of 3D scene onto 2D plane\*. We need to understand the geometric and photometric relation between the scene and its image.**

- By geometric, we mean given a point in the scene. We need to understand where it ends up in the image.
- By photometric, we mean the brightness and appearance of a point in this scene would be in the image.

**<span style="color:#2874A6">
Topics:
</span>**

- **(1) Pinhole and Perspective Projection**

  - This is the simplest type of camera you can imagine. It has a very long history.

  - The pinhole camera performs what's called **perspective projection**. This is one of the most important concepts in computer vision.

  - We'll derive perspective projection and talk about some of the visual manifestations of perspective projection.

  - And then we'll argue that while the pinhole camera is great in terms of the clarity of images it can produce, it simply does not gather enough ligjt. To resolve this issue, we use lenses.

- **(2) Image Formation using Lenses**

  - Various attributes, focal length, depth of field, defocus, F number.

- **(3) Lens Related Issues**

  - Even if a lens is perfectly manufactured, it turns out that it's going to end up having some geometric aberrations and produce some distortions.

  - We'll talk about what these effects are in images and how we might be able to correct them.

- **(4) Wide Angle Cameras**

  - We will deviating from perspective project, and look at the problem of capturing unusually large fields of view.

  - For example, hemispherical field of view. It turns out this cannot be done using perspective projection.

  - So we design lens, which will allow us to capture very large fields of view, as well as combinations of mirrors and lenses.

- **(5) Biological(Animal) Eyes**
  - Focus on human eye and some of its remarkable characteristics.

### 1.2 Pinhole and Perspective Projection

#### 1.2.1 Is an image being formed on the screen?

![bare_scene_and_screen](./figures/bare_scene_and_screen.png)

Here you see a three-dimensional scene on the right, which is a house. And you see a screen, or let's call it an image plane, on the left.

**Question: Is an image being formed on the screen?**

If you consider any point on the screen, it does receive light from a lot of points on the house. But you don't see a clear image.

So one could arugue that there is an image being formed. But it's a muddled image, and not a clear one.

**Answer: Yes! But not a "clear" one.**

#### 1.2.2 How does one create an image on the screen?

**Question: How does one create a clear, crisp image of the house on the screen?**

The simplest way to do this is by using a pinhole.

![bare_pinhole_scene](./figures/bare_pinhole_scene.png)

A pinhole is an opaque sheet with a tiny hole in it. And it's placed between the scene and the image plane as show here.

Now if you take a look at a single on the house, you see that there is a ingle ray that travels from that point, in this case, $P_{0}$, to the image plane, and projects ontothe point Pi.

![pinhole_projection_one_point](./figures/pinhole_projection_one_point.png)

So every point of the scene now projects on to a single point in the image.

So we want to understand the relationship between $P_{0}$ and $P_{i}$.

For that, first, we are going to erect a coordinate frame, xyz, three-dimensional coordinate frame placed at the pinhole, with the z-axis pointing along the optical axis.

![pinhole_with_optical_axis](./figures/pinhole_with_optical_axis.png)

The optical axis, by the way, is the axis that is perpendicular to the image plane, shown here as a dotted line.

#### 1.2.3 Effective Focal Length

So the z-axis point towrds the image plane and lines on the optical axis. And the distance between the pinhole and the image plane is called the **effective focal length**, that is $f$.

![effective_focal_length](./figures/effective_focal_length.png)

So now we can write the point $P_{0}$ using the vector $\overline{r_{0}}$. And that has coordinates $x_{0}$, $y_{0}$, $z_{0}$.

And its image can be denoted as $r_{i}$, which has coordinates $x_{i}$ and $y_{i}$ on the image plane. And the z-coordicate is going to be $f$.

Inrespective of where the point lies in 3D scene, irrespective of its $z$ component on the image plane is going to be $f$, the **effective focal length**.

![pinhole_with_optical_axis_triangle](/figures/pinhole_with_optical_axis_triangles.png)

From these two similar triangles shown as above, we can write:

![pinhole_equation_f](/figures/pinhole_equation_f.png)

By the way, $z_{0}$ is the z-component of the point in 3D. In other words, it's the depth of point in 3D.

And since $\overline{r_{i}}$ and $\overline{r_{0}}$ are vectors, we can break it down into its components into the equations as below.

![pinhole_equation_vector_break](./figures/pinhole_equation_vector_break.png)

#### 1.2.4 Pinhole Camera History - Camera Obscura

Very simple equation, but create some fairly non-intuitive effects in images. So this idea of pinhole, projection and a pinhole camera, actually dates back to 500 BC.

There were Chinese philosophers who were riting about this concept way back then. And then somewhere around 1000 AD, the Arab physicist, Alhazen, he wrote a book called <<Kitab al-Manazir>>, it's actually one of the first optics books. He describes, in great deal, this concept of pinhole camera.

And it's only in the 16th century, that this concept actually came to the West. It became very popular among artists, particuarly, as a tool for rendering accurate depictions.

![pinhole_history](./figures/pinhole_history.jpeg)

So here is a sketch by Gemma Frisius, the Dutch mathematician, where you can see that there is a wall with a little pinhole, the 3D scene gets projected by this pinhole onto a 2D image.

And now you can imagine that an artist can walk up to this wall and sketch out a very accurate geometrical representation of the perspective projection of the scene, a picture.

By the way, this concept was called **_camera obscura_**, which in Latin, means a dark chamber.

#### 1.2.5 Pinhole Eye of Nautilus pompilius

Well, when it comes to the pinhole camera, as with many other things in life, nature got there first. So here is an eye, which is a pinhole eye, in the case of thi creature. This is a shelled sea creature called Nautilus pompilius(鹦鹉螺).

![Nautilus pompilius](./figures/Nautilus_pompilius.png)

You can see that it has an eye with a farily large pinhole, which creates an image, and there is no lens in this eye.

#### 1.2.6 Perspective Projection of a Line

All right now let's take a look at some of the properties of perspective projection.

![bare_perspective_projection_of_a_line](./figures/bare_perspective_projection_of_a_line.png)

And we know that the line and the pinhole, that is a line and a point, define a plane in 3D. And all the rays of light that pass through the pinhole lie on this plane.

![perspective_projection_of_a_line](./figures/perspective_projection_of_a_line.png)

And for that matter, all the rays of light that pass through the pinhole towards the image plane almost should lie on this plane. And so the image of this 3D line on your 2D image must be the intersection, must line at the intersection of this plane and the image plane.

So in other words, the image of a line in 3D, has to be a line in 2D. This is why you find that in photographs, **straght lines in the scene will map to straght lines in the photograph**.

#### 1.2.7 Image Magnification Equation

You have an object of a certain size, at a certain distance, what is going to be its size in the image. So for thi, we're going to use a little segment here: $A_{0}$ -> $B_{0}$ of length $d_{0}$.

![Image_Magnification_0](./figures/Image_Magnification_0.png)

So this segment lies on a plane in the scene that is parallel to the image plane. Then it produces an image, which is another segment which is $A_{i}$ -> $B_{i}$.

![Image_Magnification_1](./figures/Image_Magnification_1.png)

We want to understand what the length of the segment $A_{i}$ -> $B_{i}$ is going to be due to a segment of length $d_{0}$ in the scene.

So the ratio of the length of the segment in the image to the length of the segment in the scene, is called the magnification. And this, of course, can be written in terms of the displacements:

![Image_Magnification_2](./figures/Image_Magnification_2.png)

So now we want to substitute for the displacements in the image. So we can simply this. And to do that, what we're going to do is apply perspective projection to the Point $A_{0}$ and $B_{0}$. In doing so, we are going to get four equations:

**From Perspective Project:**

<span style="font-size:2em;">${x_i \over f} = {x_0 \over z_0}$</span> and <span style="font-size:2em;">${y_i \over f} = {y_0 \over z_0}$</span> --- (A)

<span style="font-size:2em;">${x_i + \delta x_i \over f} = {x_0 + \delta x_0 \over z_0}$</span> and <span style="font-size:2em;">${y_i + \delta y_i \over f} = {y_0 + \delta y_0 \over z_0}$</span> --- (B)

Using these four equation you end up with a very simple expression for the relationship between displacements in the image to the displacements in the scene.

**From (A) and (B) we get:**

<span style="font-size:2em;">${\delta x_i \over f} = {\delta x_0 \over z_0}$</span> and <span style="font-size:2em;">${\delta x_i \over f} = {\delta y_0 \over z_0}$</span>

And pluging these back into the equation for magnification, it turns out you get a very simple expression:

**Magnification:**
![magnification_equation.png](./figures/magnification_equation.png)

The magnitude of $m$, the absolute value of $m$, is going to be the absolute value of $f$, that's the effective focal length divided by $z_{0}$, which is the depth of the object in the scene.

So note that there's $z_{0}$ in the denominator. This is a really interesting thing. The size of the magnification of an object in an image is going to be inversely proportional to its distance from the camera.

![simple_magnification_equation.png](./figures/simple_magnification_equation.png)

By the way, the sign of $m$ is going to correspond to whether the image is upright or inverted. In the case of a pinhole camera of the type that we've just talked about, it's going to be inverted, and therefore, negatvie.

#### 1.2.8 Image Magnification Manifestations

![train_tracks.png](./figures/train_tracks.png)

So here you see train tracks, two parallel tracks. The tracks must be parallel, otherwise the train is going to have a problem. We know that these two lines are parallel in 3D. And yet, in the image, they appear to be intersecting or meeting at infinity. As you go further and further away, in terms of depth, the two lines get closer and closer. And this is because magnification is inversely proportional to the distance, $z_{0}$, depth.

![magnification_manifestion_0.png](./figures/magnification_manifestion_0.png)

So you can actually have some fun with this effect, magnification effect as a photographer. Herey you know that these two people are probably roughly the same height. And yet, the man seems to be standing small enough to be standing on the palm of the woman.

![small_man_standing.png](./figures/small_man_standing.png)

#### 1.2.9 Remarks about Magnification

- $m$ can be assumed to be **<span style="color:#2874A6">constant</span>** if the range of scene depth $\Delta$$z$ is much smaller than the average scene depth $\tilde{z}$.
- ![magnification_area_square.png](./figures/magnification_area_square.png)

#### 1.2.10 Vanishing Point

![vanishing_point.png](./figures/vanishing_point.png)

We can assume that all of these lines area parallel in 3D, because it's a tunnel. And yett all of them seem to be emerging from a single point in the image. And that point is called the **vanishing point**.

So if you have a set of parallel lines in 3D, they end up producing, it doesn't matter how many parallel lines, they end up sharing a single **vanishing point**. They seem to be converging at the single point in the image.

And the location of this vanishing point in the image, depends on the **<span style="color:#2874A6">orientation</span>** of parallel straight lines in 3D.

#### 1.2.11 Finding the Vanishing Point

How do we figure out, given a set of parallel lines in 3D, where the **vanishing point** is going to end up for that set of lines?

So here is a very simple way one can figure this out, a very intuitive way to do it.

![vanishing_point.png](./figures/finding_vanishing_0.png)

So assume that you have these two parallel lines. And we want to find the vanishing point corresponding to these two lines. Well, remember, all parallel lines in 3D share the same **vanishing point**.

We need to do is to construct a line that is parallel to these two lines that passes through the pinpole. Wherever that line pierces the image is the **vanishing point** corresponding to this set of parallel lines in 3D.

![finding_vanishing_1.png](./figures/finding_vanishing_1.png)

But how do we find this?

- We first define the direction of the set of parallel lines in 3D.
  - Givin by the vector $l_{x}$, $l_{y}$, $l_{z}$.
- And then we create a point, which is in that direction, a point $P$ in that direction from the pinhole of the camera.
- Then you simply perspectively project that point into the image using perspective projection equations that we already know. And you get the location of the vanishing point.

![finding_vanishing_2.png](./figures/finding_vanishing_2.png)

**<span style="color:#2874A6; font-size:1.5em">Calculation the coordinates:</span>**

**Vanishing point of the line is the projection of point $P$.**

<span style="font-size:2em;">${(x_{vp}, y_{vp})} = {(f{l_{x} \over l_{z}}* {f{l_{y} \over l_{z}}})}$</span>

The vanishing point is a concept that artists have used extensively. Here is an example, Johnnes Vermeer painted **_The Music Lesson_**, very famous painting by this Dutch artist.

![the_music_lesson](./figures/the_music_lesson.jpeg)

In this scene here, you have sets of parallel lines. But let's take a look at this set right here.

![the_music_lesson_marked_set.png](./figures/the_music_lesson_marked_set.png)

You see that this set of parallel lines ends up converging at this point. This is the vanishing point right here. And what Vermeer has done is place what he considers to be the most important object or activity exactly at that place.

In this particular case, it sits at the elbow, or close to the elbow, of the student who is playing the piano. He wants to draw your attention to that activity.

So a lot of artists figured out early on that humans, in any 3D scene, in any photograph, tend to be drawn to vanishing point, especially dominant vanishing points that are created by large numbers of parallel lines.

And so they tended, they played this trick of placing the most important subject or activity at those points.

#### 1.2.12 False Perspective

Here's another interesting concept, which is called **False Perspective**. This is Galleria Spada by Francesco Borronmini. It's a beautifule little gallery in Rome.

![Galleria_Spada_false_perspective.png](./figures/Galleria_Spada_false_perspective.png)

What you see here is a archway, or a little bit of a halfway. And at the end of the hallway, you have the sculpture. When you stand in front of the hallway, you get the impression that the sculpture is roughly 150 feet away from you. It turns out that this sculpture is only 30 feet away from you.

The reason you have this very compelling effect, or illusion, is because the pillars of the archway are actually geting smaller with distance away from the observer. So is's a tapered archway, this creates this effect of **False Perspective**, which forces you to believe, leads you to believe, that the object at the end of the hallway is much further away than it actually is.

#### 1.2.13 What is the Ideal Pinhole Size?

OK, so we talked about the pinhole and how it can be used to create images. But one thing we sort of set aside is the size of the pinhole. What should the size of the pinhole be?

![size_of_pinhole_0.png](./figures/size_of_pinhole_0.png)

If you look here, you have the size of the pinhole used to take a set of images. At the beginning of 2mm, when you are getting the pinhole smaller and smaller, you see that it gets sharper till to 0.35mm.

But here's the interesting thing, you go smaller, you make the pinhole even samller, actually the image starts getting burrier again.

Why does this happen? This is because of an effect in **wave optics called diffraction**. It turns out that if you have any opening, and you have a light wave that's passing through this opening, there is going to be a bending of these light waves at the edge of the periphery of the opening.

![diffraction](./figures/diffraction.gif)

The samller the opening gets, there's going to be more the effect of the bending that the light actually passing through. So you get severe bending as you get too small.

So then the question is, what is the ideal size of the pinhole?

![ideal_pinhole_size_formula.png](./figures/ideal_pinhole_size_formula.png)

#### 1.2.14 What about Exposure Time?

One of the interesting things you notice is that the iamge is pretty much focused everywhere. So pinhole cameras, well-designed pinhole cameras tend to create these sort of all-focused, focused everywhere images.

![flatiron_building_in_NY.png](./flatiron_building_in_NY.png)

Since a plinhole captures very little ligt, it lets very little light through. As a result of that, the exposure times tend to be much longer. So the detector that you're using to capture the image has enough photons that arrive on it. So Pinhole pass less light and hence require **long exposures** to capture bright images.

And so you can image that almost for any real application of computer vision, waiting for 12 seconds to capture a single frame is just not going to work. And that's why we use lenses.

### 1.3 Using Lenses

#### 1.3.1 Lenses

Now let's take a look at how you form an image using a lens. The lens performs the same projection as pinhole, which is perspective excpet that it gathers a lot more light.

![lens_00.png](./figures/lens_00.png)

You see a lens here. And let's consider this point in the scene $P_{0}$. All the rays of light received by the lens from the point $P_{0}$, are refracted or bent by the lens to converge at the point $P_{i}$.

So $P_{i}$ is where the point $P_{0}$ is going be focused behind the lens. And the bending power of the lens is defined by its focal length.

Now if you compare these with a pinhole camera, in the case of a pinhole camera the only ray of light that would have made it through is this orange ray which passes through the center of the lens.

![lens_01.png](./figures/lens_01.png)

#### 1.3.2 Gaussian Lens (Thin Lens) Law

![gaussian_lens_law](./figures/gaussian_lens_law.png)

#### 1.3.3 How ti Find the Focal Length?

How dees one find the focal length of a lens if that's not given to you. It's actually pretty easy.

Once again you have the Gaussion Lens Law. In this equation if you set $o = \infty$, which means if you use a source that is or a point in the scene that is really far away and you image it, then $o$ is infiity, then you see that $f = i$.

![lens_infinite_object_distance](./figures/lens_infinite_object_distance.png)

By simply showing the lens an object that is really far away such as the sun, a very distant point light source, and looking at where the image of that point source is formed on say a sheet of paper, the distance between the focused image and the lens is the focal length.

Now the bending power or the focal length of the lens is determined by a few factors.

- One is the material that lenses made of.
  - It could be made of glass or it could be made of plastic.
  - It has to be a transparent material.
- So the refractive index of the material determines $f$ to a great extent, but it's also determined by the shape of the lens.
  - The shape of the lens has two surfaces, curved surfaces - typically spherical surfaces.
  - The radius of curvature of these two surfaces also determines the focal length of the lens.

#### 1.3.4 Image Magnification

Once again you have the object distance $o$, the image at distance $i$. And the height of the object in this case is $h_{0}$, and we want to know what is going to be the height of the image $h_{i}$.

![lens_image_magnification](./figures/lens_image_magnification.png)

So the magnification is defined as $h_{i}$ divided by $h_{0}$. If you look at these two similar triangles - the red triangles, you see that $h_{i}$ divided by $h_{0}$ is equal to $i$ divide by $o$.

![lens_image_magnification_formula](./figures/lens_image_magnification_formula.png)

#### 1.3.5 Two Lens System

So one can actually change the magnification of a lens system by using multiple lenses. Let's take a look at this two lens system.

![two_lens_system.png](./figures/two_lens_system.png)

In this case, you have lens $L_{1}$ and $L_{2}$, an object with distance $o_{1}$ from the lens $L_{2}$. So this object is imaged onto the _`Intermediate image`_ that is focused, that acts like a new object, if you will. And it is image by the lens $L_{1}$ to get the _`final image`_.

So the magnification of the complete system is a magnification due to lens $L_{2}$ times the magnification due to a lens $L_{1}$. Without changing the distance between the object and the image plane, you can actually move the lenses $L_{1}$ and $L_{2}$ around to change the effect of magnification of the complete system.

That really is the process of **zomming**, it's moving the lenses to change the magnification of a lens system.

#### 1.3.6 Aperture of Lens

The aperture of the lens is the clear area of the lens that gathers light from points in the scene and it has a diameter $D$.

![aperture_of_lens.png](./figures/aperture_of_lens.png)

In a typical lens such as this screenshots as below, you see that the aperture is implemented using what's called the diaphgram.

![aperture_diaphgram.png](./figures/aperture_diaphgram.png)

You can change the ring in the back, what that does is this set of blades that come together to change the diameter of the aperture. So from left to right, we're going from an open aperture to a closed aperture.

#### 1.3.7 f-number (f-stop, f-ratio) of Lens

It's convenient to express the aperture diameter of lens in terms of its as a fraction of the focal length of the lens. That's called the **f-number**.

![fnumber.png](./figures/fnumber.png)

If you are looking at the **f-number** as the aperture as a way to represent the aperture, as you go from a fully open aperture to a closed aperture, the **f-number** is going to go up while the diameter goes down.

![fnumber_example.png](./figures/fnumber_example.png)

#### 1.3.8 Lens Defocus

Now let's talk about the price we pay when we use a lens. Gathers a lot more light, but there's only one plane in the scene that is perfectly focused onto the **image plane** by lens.

So let's take a look at our point $o$ once again, this distance $o$ is going to be focused at the distance $i$ behind the lens.

![plane_of_focus.png](./figures/plane_of_focus.png)

For this particular position of the **image plane**, that is exactly one plane which is going to be completely in focus. In fact any point on the **plane of focus** on the right is going to be perfectly focused on this **image plane**, and this is called the plane of focus corresponding to your lens system.

Now we have to ask what happens if you happen to lie outside of this **plane of focus**. So let's consider at this point right here, which happens to be at a distance $o'$ from the lens.

![outside_plane_of_focus.png](./figures/outside_plane_of_focus.png)

Since it's closer to the lens, its image is going to be formed behind the **image plane**. In other words, the light that the lens receives from the central point is not going to end up being a single point on the image plane, but rather distributed over a circular disk on the image plan. It's going to be **blurred**. This is call **blur circle**.

The **blur circle** has a diameter let's say equalt to $b$. We want to figure out what thi **blur circle** diameter is for any given position of the object in the scene.

For that we use these similar triangles, the small orange left of the **blur circle**, and the large one on the right. We have:

<span style="font-size:2em;">${b \over D} = {|i' - i| \over i'}$</span>

**Blur circle diameter:**

<span style="font-size:2em;">$b = {D \over i'}|i' - i|$</span>

<span style="font-size:2em;">$b \propto D \propto {1 \over N}$</span>

The **blur circle diameter** is proportional to the diameter of the aperture. You use a lens which deviates from a pinhole camera more and more, which larger and larger aperture, you're going to end up with a greater degree of blur for point that lie outside the plane of focus.

So the blur circle diameter is proportional to the diameter of the aperture, and therefore inversely proportional to the **f-number** of the lens.

Let's review this expression again, we have the image distances $i'$ and $i$. We'd like to express this in terms of the object distances $o'$ and $o$ because that's what we have at our disposal. We want to know what happens when we move things away from the plane of focus in the scene.

#### 1.3.9 Blur Circle (Defocus)

So we use the Gaussian lens law again. We can write the Gaussian lens law for lens equation for the focused point and the defoused point.

![blur_circle.png](./figures/blur_circle.png)

Eventually we can get the expression here.

#### 1.3.10 Focusing

How do we focus an imaging system? Here you see an out of focus defocused imaging system. The object you want to in the image, but it's being imaged behind the image plane, therefore creating a blur circle.

![focusing_methods.png](./figures/focusing_methods.png)

The obvious thing to do to focus this imaging system would be:

- move the image plane.
- move the lens itself thereby changing the Guassian lens equation and getting the point into focus.
- move both the len and the iamge plane.

For that matter you could also move the entire camera system towards or further away form the object. So as to bring it into focus.

### 1.4 Depth of Field

#### 1.4.1 Depth of Field (DoF)

For any given image sensor or image plane location, there is one plane in the scene that is perfectly focused. All things, all objects that lie outside of that plane are going to be out of focus.

And the degree of defocus is going to increase with its distance from the plane of focus. This is in continous domain when you're talking about your optical image.

![dof.png](./figures/dof.png)

But we also know that images have finite resolution, they are made of pixels of finite size. So it turns out that the best focus region in the scene or the range of depths in the scene that are best focus are those points in the scen, for which the blur circel lies within a single pixel.

So as long as the blur circle happens to be smaller in diameter that the size of a pixel, all points are going to be equally out of focus, or equally focus, and that's why you see here

The range of object distances for which the image is "sufficiently well" focused, that is the range over which the blue $b$ is lees that the pixel size is called the** depth of field **of the imaging system.

So let's find the depth of field of lens system. For that we have to:

![dof_model.png](./figures/dof_model.png)

- First define the pixel size, let's call that $c$.
- See what is the range of distances of the object $o$ for which the blur is going to smaller than $c$.
- Let's consider the point $o_{1}$.
  - This is the point for which the diameter of the blur circle exactly equals the size of the pixel $c$.
  - In this case because the point is in front or closer to the image, the lens itself, it is closer to the lens than $o$, so the image is going to be formed behind the image plane with a blur circle of diameter $c$.
- Then there is another point $o_{2}$ which is further away from the lens, where the images are going to be formed in front of the image plane, but then it again diverges to create a blur circle of diameter $c$.

**DoF = $o_{2}$ - $o_{1}$**

We can find out this **DoF** pretty easily, because we have an expression for the blur circle diameter. So in that blur circle diameter expression instead of $b$, we are going to just plug-in $c$ which is the size of your pixel.

- For the scenario where the object is in front you are going to have the first expression with $o_{1}$.
- For the case where the object is further away than the plane of focus, you're going to get the second expression on the right.

Note that we have got:

- $c$ - size of the pixel.
- $f$ - focal length
- **f-number**
- The distance of the plane of focus $o_{1}$ and $o_{2}$.

**So now we can get a simple expression for the depth of the field.**

![dof_expression.png](./figures/dof_expression.png)

Interesting thing to note here that the distance between $o_{2}$ and $o$ is greater than the distance between $o1$ and $o$. That is closer and closer you get to the lens, the defocus is going to increase more rapidly.

## 2 Features: Edges, Boundaries, SIFT, Applications

## 3 Reconstruction 1: Shading, Focus, Active Illumination

## 4 Reconstruction 2: Stereo, Optical Flow, SFM

## 5 Perception: Segmentation, Tracking, Recognition
