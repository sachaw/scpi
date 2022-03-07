# SCPI Command Archive

## Into

It is well known that manufacturers rarely document all the available SCPI commands on their instruments. Many of these commands are used internally by the host applications.

As it stands the most sure-fire way of obtaining all of the available commands that an instrument supports is through recompilation.

Using the binaries located on your instrument and commonly available tools such as [Ghidra](https://ghidra-sre.org/) You are able to find all commands that are internally registered.
The primary downside to this approach is the lack of direct information about parameters.
