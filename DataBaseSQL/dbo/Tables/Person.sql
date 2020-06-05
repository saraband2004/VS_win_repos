﻿CREATE TABLE [dbo].[Person]
(
	[Id] INT NOT NULL PRIMARY KEY IDENTITY, 
    [PID] INT NOT NULL, 
    [AGE] INT NOT NULL, 
    [ADDRESS] NCHAR(100) NOT NULL, 
    [FULLNAME] NCHAR(20) NOT NULL, 
    [KEY] NCHAR(100) NULL, 
    [VALUE] NCHAR(100) NULL
)