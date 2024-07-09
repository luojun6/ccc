# Machine Learning with Python: Foundations

## 1 Machine Learning

### 1.1 What is machine learning?

**Traditional Programming**
![foundation_0](./images/foundation_0.png)

In 1959, computer pioneer Arthur Samuel thought of a different approach. He wondered if computer could infer logic instead of being given explicit instructions. In other words if machines could learn.

**Machine Learning**
![foundation_1](./images/foundation_1.png)

Could a computer figure out the best set of instructions that would yield the given output based on the data that was provided to it?

To illustrate this idea, let's say we gave a computer, the numbers on the left as input data, as well as numbers on the right as expected outputs.

![foundation_2](./images/foundation_2.png)

As we give the computer more input and output examples, if the computer is able to gradually figure out that a simple linear combination of the input values is a close approximation of the output values.

![foundation_3](./images/foundation_3.png)

Then we say that the computer, or machine, is learning.

After we train the model, which is a model that has learned the right set of instrcutions for a given task, going forward, we simply give it input data, and to apply its internal instructions, to provide us with output.

**Supervised Learning**
![foundation_4](./images/foundation_4.png)

What we just discussed is a type of machine learning, known as supervised learning.

Supervised learning is useful in solving problems, such as image recognition, text prediction, and spam filtering.

![foundation_5](./images/foundation_5.png)

A different type of machine learning is unsupervised learning. with unsupervised learning, we simply ask the machine to evalute. 

**Unsupervised Learning**
![foundation_6](./images/foundation_6.png)

With unsupervised learning, we simply ask the machine to evaluate the input data and identify any hidden patterns or relations that exist in the data.

Unsupervised learing is used in movie recommendation systems, and to perform customer segmentation for marketing purposes.

![foundation_7](./images/foundation_7.png)

The 3rd type of machine learing is known as reinforcement learning. in this approach, there are two primary entities, the agent and the environment.

**Reinforcement Learning**
![foundation_8](./images/foundation_8.png)

The agent figures out the best way to accomplish a task through a series of cycles in which the agent takes an action, and receives immediate positive or negative feedback on the action from the environment. 

After a number of cycles, the agent eventually learns the optimal sequence of actions to take in order to accomplish the task at hand.

Reinforcement learning is commonly used in computer game engines, robotics, and self-driving cars.

### 1.2 What is not machine learning?

#### 1.2.1 The relationship between statistics and machine learning

Some might characterize machine learning as an elevated form of statistics, but it's essential to understand that while machine learning does draw extensively from statistical concepts, its foundation extends beyond statistics to cncompass principles from information theory, calculus, algebra, engineering, and even biology.

![foundation_9](./images/foundation_9.png)

Referring to machine learning as glorified statistics is akin to referring to physics as glorified mathematics, or architecture as glorified reclaim.

It's crucial to emphasize that the goals and objectives of machine learning often differ from those of basic statistical modeling.

Machine learning is mostly concerned with results, in the form of predictions. In other words, the primary focus of machine learing is to predict future outcomes based on past events.

Statistical models, on the other hand, are mostly concerned with the relationship between variables. This is known as **inference**. The statistical model, we want to understand what happens to variable B as a result of a change in variable A.

![foundation_10](./images/foundation_10.png)

The overlap between the approaches used in machine leanring and those used in statistical modeling are sometimes broadly referred to as statistical learning.

#### 1.2.2 Machine learning, data mining and optimization

These terms refer to approaches that are closely related. They represent the differnet branches in the broad field of data science.

Much like the distinciton, between machine learning and statistics, to contrast between machine learning and data mining revolves around their ultimate objectives.

![foundation_11](./images/foundation_11.png)

While machine learning prioritizes prediction by utilizing known data properties, data mining emphasizes on covering previously unknown patterns in data.

In the field of business analytics, the traditional understanding of machine learning is often referred to as predictive analytics, data mining as descriptive analytics, and optimization as prescriptive analytics.

We use prescriptive analytics to identify patterns in historical data, predictive analytics to predict future outcomes, and prescriptive analytics to get a recommendation of the best course of action to take.

#### 1.2.3 The remaining terms

- **Deep learning** is one of many machine learning approaches that fall under the umbrella of what is known as supervised machine learning.
  - Supervised learning, along with reinforcement learning, and unsupervised learning, make up the 3 major branches of machine learning.

- **Artificial Intellligence** 
  - Though often used interchangeably, machine learning is not the same thing as artificial intelligoence or AI.
  - Machine learning is a subfield in artificial intelligence.
  - In other words, all machine learning is AI, but not all AI is machine learning.
  - A large field of computer science that deals with the simulation of intelligent behaivor and computers. This includes behaviors such as:
    - visual perception
    - speech recognition
    - decision-making
    - translation between languages

![foundation_12](./images/foundation_12.png)

Artificial intelligence models can be categorized in several differnt ways. One approach is to classify them based on the type of function they perform.

#### 1.2.4 Discriminative AI & Generative AI

![foundation_13](./images/foundation_13.png)

**Discriminative AI Models**

Models that focus on categorizing input data or on predicting a future outcome based on historical data.

When provided with the text of customer reviews of a local restaurant, a discriminative model can correctly label each review as either satisfied, unsatisfied, or neutral. It is able to determine the probability that a particular review belongs to a certain category givin the input text.

**Generative AI Models**

Models that are designed to create content based on user input. 

We can use a generative AI model to generate innovative texts, complete sentences, and even craft entirely fresh pieces of writing.

One of the prominent generative AI methodologies gaining significant attention today are **large language models**, also known as LLMs.

![foundation_14](./images/foundation_14.png)

LLMs are generative AI models that are really good at understanding and generating human-like text, based on the input or prompts they receive.

### 1.3 What is unsupervised learning?

- Unsupervised learning is the process of building a descriptive model
- Descriptive models are used to summarize and group unlabeled data in new and interesting ways

Let's assume that we are part of the analytics team at the local credit union. our task is to figure out better ways to market our products to our bank card customers.

Instead of creating a marketing strategy for each customer, we could decide to use machine learning to group or segment our customers based on simlarity, and then create a marketing strategy for each segment.

Let's also assume that we already have two kinds of information about our customers:
1. Historical information about the spending habits of your customers.
   - With this information, we could assign a spending score to each customer, depending on how often they use their bank card and how much money they spent on an annual basis.
2. Demographic information about each customer (age, gender, income, education level, etc.)

In order to segment customer based on similarity, we pass the historical data to unsupervised machine learning model. This type of model is called an unsupervised model, because there is no pre-existing rubric, or which to evaluate the models output. In other words, there is no external supervisor telling the model, whether its output is right or wrong. 

![foundation_6](./images/foundation_6.png)

Unsupervised machine learning models analyze the input they receive using a descriptive approach in order to highlight the patterns or interesting relationships that exist in the data.

**Example:**
![foundation_15](./images/foundation_15.png)

Our objective is to group customers based on spending score and income level alone.

![foundation_16](./images/foundation_16.png)

On a two-dimensional plane, each of our customers could be represented this way. Using just a spending score and income level, an unsupervised machine learning model could automatically evaluate each customer and group them based on how similar they are to other customers.

![foundation_17](./images/foundation_17.png)

With each customer assigned to a group, we then assign them a segment label. This is customer segmentation.

![foundation_18](./images/foundation_18.png)

With this information, we can develop a marketing strategy targeted to each segment with the expectation that customers within each group will likely respond to a campaingn in a simliar way because they share the same characteristics.


### 1.4 What is supervised learning?

- Supervised learning is the process of training a predictive model
- Predictive models are used to assign lables to unlabeled data based on patterns learned from previously labeled historical data

If we want to predict the outcome of a new event, we can use a predictive model that has been trained on similar or related events to predict the outcome. 

Let's assume that we work in the analytics department of a local creadit union. Our task is to develop a machine learning model that predicts loan risk. Specifically, we would like to build a model that predicts whether a particular customer will or will not default on a loan.

Let's also assume that we already have two kinds of information about the loans our bank has previously issued.

1. Descriptive informaiton about previous loans (loan amount, loan grade, income, purpose, etc)
2. The outcome or each previous loan
   - The outcome data is a lable that tells us whether the borrower paid back the loan in full or whether the borrower defaulted on the loan.
  
Before we can use a supervised machine learning model to predict the outcome of a new loan, we first have to train the model using historical loan data.

In machine learning, we call the input the independent variables, and we call the output the dependent variable.

The independent variables and dependent variable make up what is known as a training data.

![foundation_19](./images/foundation_19.png)

If our training data consists of 10 previously issued loans by our credit union, then the independent variables are the loan amount, the grade of the loan and the stated purpose for the loan, while the dependent variable is outcome variable, default.

![foundation_20](./images/foundation_20.png)

The default varibale has two levels or values. They are "yes", which means the borrower failed to pay back the loan in full; and no, which means that the borrower paid the loan back in full.

The train on model, we provide it with three independent variables and we provide it with the dependent variable or outcome as well. With these two sets of values, the machine learns the patterns in the data, and builds a set of instructions that connect the input to the output.

![foundation_21](./images/foundation_21.png)

This set of instructions represent the trained model. After a model has been trained, we can evaluate how well its instructions explain the relationship between the independent variables and the dependent variable.

One way to do this is to provide the trained model, in order to see what output values it will predict. By comparing the predicted outcomes with the actual outcomes.

![foundation_22](./images/foundation_22.png)

We cam score the performance of the model, based on how many of them match. We call this the **predictive accuracy** of the model.

The higher the socre, the better the model is. And the lower the score, the worse the model is.

![foundation_23](./images/foundation_23.png)

This definition presents 3 components:
- Experience **E**  
  - The training data
- Class of tasks **T**
  - Predict who will default
- Performance measure **P**
  - Predictive accuracy

**Reword the supervised machine leaning definition as:  **
![foundation_24](./images/foundation_24.png)

### 1.5 What reinforcement learning?

Reinforcement learning is the science of learning to make decisions from interaction.

It has many applications like autonomous driving, robotics trading and gaming.

Reinforcement learning is very similar to early childhood learning. A toddler sees something, does something, gets positive or negative feedback, then adjusts his or her future behavior accordingly.

Unlike unsupervised learning where the objective is to identify unknown patterns is unlabeled data and supervise learning where the objective is to learn patterns in previously labeled data. Reinforcement learning attempts to tackle two distinct objectives:
- Finding previously unknown solutions to a problem to existing problem
  - The machine that plays chess better than any human ever.
- Finding solution to problems that arise due to unforeseen circumstances
  - The machine that is able to find an alternatiev route through a terrain, after a mudslide has altered the expected route.
  
Reinforcement learning involves true primary entities that repeatadly interact with each other. One of them is the agent and the other is environment.

The agent interacts with the environment by taking actions. The environment responds to the actions of the agent, by providing feedback or observations to the agent.

The feedback provided by the environment comes in two forms, state and reward.
- The state describes the impact of the agents's previous actions on the environment, and the possible actions the agent can take.
- Each action is associated with a numeric reward, which the agent receives as a result of taking a particular action.

![foundation_25](./images/foundation_25.png)

The agent's primary objective is maximize the sum of rewards it receives over the longterm.

Let's also assume that the first player is not agent, and plays Os while agent is a second player and plays Xs.

The first move of the game could look something like this. The table to the right is konwn as a policy table. It represents states an rewards.

![foundation_26](./images/foundation_26.png)

Columns A1 to C3 are the positions on the board. While column D is reward associated with each state. Each row represents an available state or action that agent can make, given that the first player has played O in position A3. 

One stands for player one and two stands for player two. Notice that column A3 is taken, and is therefore grayed out the pre-filled with one. This means that the agent can play any position on the board excpet A3, given the available actions and rewards, the agent must evalute each possible action and choose the one that yields the highest reward. This is known as exploitation.

Since all of the actions currently have the same reward, the agent randomly decides to play B2, in the second move, if the first player plays B3, then the state table via shown here.

![foundation_27](./images/foundation_27.png)

Once again, the agent was choose the action that yields the highest reward. Since all of these actions have a reward of 0.5, the agent randomly settles on a play of C3.

The process repeats a 3rd time for player one and for player two. At the end of each player's third move, the environment determines that player one has won the game.

![foundation_28](./images/foundation_28.png)

This is knwon as a terminal state. The coin cycle of learning has ended. At the end of the learning cycle, because the action taken by the agent in the 3rd move resulted in the victory, the reward associated with that action is updated by the environment from 0.5 to 1 in the policy table.

![foundation_29](./images/foundation_29.png)

This is known as a backup, using the mathematical equation, the reward associated with the agents's second move is also backed up in the policy table, as well as a reward associated with the agent's first move.

![foundation_30](./images/foundation_30.png)

As a result of the higher rewards associated with the sequence of actions, the agent took in the first learning cycle, during subsequent learning cycles, if the agent encounters a state similar to the one that it encountered in the first cycle, it will choose to take the same action that it did in the first cycle, in order to maximize reward.

![foundation_31](./images/foundation_31.png)

This brings up an important challenge with reinforcement learning. The challenge is known as the exploration versus exploitation trade-off.

If left unchecked, an agent will always prefer to take actions that he has tried in the past and found to be effective in maximizing reward.

However, the exploitation, in order to discover a new sequence of actions with potentially higher reward, the agent was try actions that it has not selected before, or that do not initially appear to maximize reward. 

In other words, the agent sometimes has to choose actions with little to no consideration for their associated reward, this is known as exploration.

An agent that focuses only on exploitation will only be able to solve problems, it has previously encountered. An agent focuses only on exploration will not learn from prior experience. A balanced approach is needed for effective reinforcement learning.

### 1.6 What are the steps to machine learning?

There 6 major steps in the machine learning process.

#### 1.6.1 Data Collection

During the data collection step, our objective is to identify and gather the data we need for machine learning.

- For unsupervised learning, this is the unlabeled data with unknown patterns that we intend to discover.

- For supervised learning, this is the labeled historical data that we intend to use to train and evaluate our model.

- For reinforcement learning, this is the data that helps our agent learn which actions yield the most reward.

![foundation_32](./images/foundation_32.png)

If we liken the machine learning process to the process of making a delicious bowl of salad, then the data collection step is like gathering all the ingredients that would go into a salad into a single basket.

#### 1.6.2 Data Exploration

Data exploration is a process of describing visualizing, and analyzing data in order to better understand it. With data exploration, we can answer questions such as, how many rows and columns are in the data?

What type of values are stored in the columns of the data? Are there missing, inconsistent, or duplicate values in the data? And are there outliers in the data?

![foundation_33](./images/foundation_33.png)

If we liken the machine learning process to the process of making a bowl of salad, then the data exploration step is like inspecting every ingredient to make sure that it is fresh, ripe, and/or exactly what we want.

#### 1.6.3 Data Preparation

Data preparation is the process of making sure that our data is suitable for the machine learning approach that we intend to use. 

It involves resolving data quality issues, such as missing data, noisy data, outlier data, and class imbalance.

Data preparation also involves modifying or transforming the structure of our data in order to make it easier to work with. This includes normalizing the data, reducing the number of rows and columns in the data.

![foundation_34](./images/foundation_34.png)

Going back to our salad analogy, the data preparation step is when we begin to cut the vegetables we plan to use in our salad. 

Depending on the type of salad we want, we may decide to cube the vegetables, slice the vegetables, or shred the vegetables. If we plan on adding chicken to the salad, this is also the stage when we either grill, bake, or saute the chicken.

Successful data science relies on good data. The data doesn't have to be perfect, but it should be good. The saying garbage in, garbage out is especially important when it comes to machine learning.

Because of how important good data is, it is not unusual to spend up to 80% of our time collecting, exploring, and preparing data.

#### 1.6.4 Modeling

Modeling is the process of choosing and applying the right machine learning approach that works well with the data we have and solves a problem at hand.

Modeling is the most well-known stage in the machine learning process. In order to apply the right type of model, we must be clear about our objective.

Knowing what type of machine learning we intend to do, and what machine learning approach is capable or incapable of will go a long way in helping us be successful in this stage.

![foundation_35](./images/foundation_35.png)

In the salad analogy, the modeling stage is analogous to mixing the ingredients that we previously prepared. Depending on the type of salad we want, we mix more of some ingredients and less than others. We also decide which ingredients to include and which to avoid altogether.


#### 1.6.5 Evaluation

As the name suggests, our objective in this stage is to assess how well the machine learning approach we chose worked. There are several ways to do this.

- In supervised learinng, where our goal is to predict a label or value, we evaluate a model by measureing how well it does in predicting labels for previously unseen data.
  
- In unsupervised learning, we usually take a more subjective approach. A good unsupervised learning model is one that provides us with results that make sense to us.

![foundation_36](./images/foundation_36.png)

The evaluation stage is when we taste test our salad. If the salad more salt or pepper, we add some seasoning. If the salad feels a bit fry, we add some dressing.

Depending on how well a model performs, we may need to build it again with slightly different data or with different settings. 

![foundation_38](./images/foundation_38.png)

The idea here is to make a change that has a meaning ful positive impact on the performance of our model. This is usually an iterative process.

#### 1.6.6 Actionable Insight

This means identifying a potential course of action based on the result of the machine learning model. For supervised learning and reinforcement learning, this is the stage where we decide whether or not to deploy our model to production.

- In unsupervised learning, this is the stage where we decide what to do with the patterns identified by our model.

![foundation_37](./images/foundation_37.png)

As for our salad, this is when we decide whether or not to serve it.

## 2 Collecting Data for Machine Learning

### 2.1 Things ot consider when collecting data

#### 2.1.1 Accuracy

For supervised machine learing problems, we use historical data that has outcome labels, or response values to train the model. Ensuring that the data is accuate is criticially important to success of their approach.

Supervised learning algorithms use this data as a baseline for the learning process. It serves as a source of truth, upon which patterns are learned in order to make future predictions.

If this data is inaccurate, then the algorithm's future predictions cannot be trusted. This is why this dat ais often referred to as ground truth data.

Ground truth data can either come with an existing label based on a prior event, such as whether a bank customer defaulted on a loan or not, or it can require that a label be initially assigned to it by domain experts, such as whether an email is spam or not.

Regardless of whether labels already exist, or need to be assigned, we should alawys have a plan to validate ground truth data after it has been acquired.

#### 2.1.2 Relevance

The type of data we collect to describe an observation should be relavant in explaining the label or the response associated with the observation.

For example, collecting data on the shoe size of bank card customers has no relevance, in explaining whether a particular borrower will or will not default on the loan.

Conversely, excluding information about a customer's income could have an adverse impact on the effectiveness of a model that attempts to predict loan outcomes.

#### 2.1.3 Quantity

The amount of data needed to successfully train a model depends on the type of machine learning approach chosen. This is a 3rd consideration, quantity.

Some machine learing algorithms work well with little data while others require a large amount of data to provide meaningful results.

Understand the characteristics of the machine learning algorithm we intend to use can provide us with guidance on how much data we need to collect.

#### 2.1.4 Variability

For example, if we intend to consider the income of a borrower as a predictor of loan outcome, then our ground truth data should include customers of sufficiently different income levels.

By doing this, we allow our model to gain a broader understanding of how income level impacts loan outcomes.

#### 2.1.5 Ethics

There are several ethical issues to consider during the data collection process.
- privacy
- security
- informed consent and bias

If bias exists in the data used to train a model, then the model would also replicate the bias in its predictions. As one can imagine, bias predictions could prove quite harmful, espeicially in situation where unfavorable decisions are being made based on a machine learning model.

Bias in ground truth data is often non-intentional. It sometimes stems from implicit human bias in the data collection process, or from the absence of existing data on certain subpopulations.

### 2.2 How to import data in Python

### 2.3 Chapter Quiz

## 3 Understanding Data for Machine Learning

### 3.1 Describe your data

### 3.2 How to summarize data in Python

### 3.3 Visualize your data

### 3.4 How to visualize data in Python

### 3.5 Chapter Quiz

## 4 Preparing Data for Machine Learning

### 4.1 Common data quality issues

### 4.2 How to resolve missing data in Python

### 4.3 Normalizing your data

### 4.4 How to normalize data in Python

### 4.5 Sampling your data

### 4.6 How to sample data in Python

### 4.7 Reducing the dimensionality of your data

### 4.8 Reducing the dimesionality of your data

### 4.9 Chapter Quiz

## 5 Types of Machine Learning Models

### 5.1 Classification vs. regression problems

### 5.2 How to build a machine learning model in Python

### 5.3 Common machine learning algorithms

### 5.4 Chapter Quiz

## 6 Conclusion

### 6.1 Next steps with applied machine learning

### 6.2 Next in this series