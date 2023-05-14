# Linux Security Modules

## Introduction to Linux Security Module

### Let's understand what is Linux security module

- Linux security module (LSM) is the framework integrated into the kernel to provide the neccessary components to implement the mandatory access control (MAC) modules, without having the need to change the kernel source code every time.
- Applicaiton whitelisting has been proven to be one of the most effective vways to mitigate cyber-intrusion attacks.
- A conenient way to implement this widely recommended practice is through the **_"Linux Security Modules"_**.

### What is LSM?

- An LSM is a code compiled directly into the kernel that uses LSM framework.
- The LSM framework is intended to allow security modules to lock down a system by inserting checks whenever the kernel is about to do somethoing interesting.
- The security modules hooks into those check points and for each operation, checks whether the operation is allowed by the security policy currently enforced or not.
- The LSM framework can deny access to important kernel objects, such files, inodes, task structures, credentials, and inter-process communication objects.
