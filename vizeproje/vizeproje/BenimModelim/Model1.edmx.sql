
-- --------------------------------------------------
-- Entity Designer DDL Script for SQL Server 2005, 2008, 2012 and Azure
-- --------------------------------------------------
-- Date Created: 11/19/2015 03:30:11
-- Generated from EDMX file: c:\users\mert\documents\visual studio 2015\Projects\vizeproje\vizeproje\BenimModelim\Model1.edmx
-- --------------------------------------------------

SET QUOTED_IDENTIFIER OFF;
GO
USE [VTMDB];
GO
IF SCHEMA_ID(N'dbo') IS NULL EXECUTE(N'CREATE SCHEMA [dbo]');
GO

-- --------------------------------------------------
-- Dropping existing FOREIGN KEY constraints
-- --------------------------------------------------

IF OBJECT_ID(N'[dbo].[FK_AraStok1AnaStok]', 'F') IS NOT NULL
    ALTER TABLE [dbo].[AnaStokSet] DROP CONSTRAINT [FK_AraStok1AnaStok];
GO
IF OBJECT_ID(N'[dbo].[FK_AraStok2AnaStok]', 'F') IS NOT NULL
    ALTER TABLE [dbo].[AnaStokSet] DROP CONSTRAINT [FK_AraStok2AnaStok];
GO
IF OBJECT_ID(N'[dbo].[FK_AraStok3AnaStok]', 'F') IS NOT NULL
    ALTER TABLE [dbo].[AnaStokSet] DROP CONSTRAINT [FK_AraStok3AnaStok];
GO
IF OBJECT_ID(N'[dbo].[FK_AraStok4AnaStok]', 'F') IS NOT NULL
    ALTER TABLE [dbo].[AnaStokSet] DROP CONSTRAINT [FK_AraStok4AnaStok];
GO
IF OBJECT_ID(N'[dbo].[FK_AraStok1hat1]', 'F') IS NOT NULL
    ALTER TABLE [dbo].[hat1Set] DROP CONSTRAINT [FK_AraStok1hat1];
GO
IF OBJECT_ID(N'[dbo].[FK_AraStok2hat2]', 'F') IS NOT NULL
    ALTER TABLE [dbo].[hat2Set] DROP CONSTRAINT [FK_AraStok2hat2];
GO
IF OBJECT_ID(N'[dbo].[FK_AraStok3hat3]', 'F') IS NOT NULL
    ALTER TABLE [dbo].[hat3Set] DROP CONSTRAINT [FK_AraStok3hat3];
GO
IF OBJECT_ID(N'[dbo].[FK_AraStok4hat4]', 'F') IS NOT NULL
    ALTER TABLE [dbo].[hat4Set] DROP CONSTRAINT [FK_AraStok4hat4];
GO

-- --------------------------------------------------
-- Dropping existing tables
-- --------------------------------------------------

IF OBJECT_ID(N'[dbo].[AnaStokSet]', 'U') IS NOT NULL
    DROP TABLE [dbo].[AnaStokSet];
GO
IF OBJECT_ID(N'[dbo].[AraStok1Set]', 'U') IS NOT NULL
    DROP TABLE [dbo].[AraStok1Set];
GO
IF OBJECT_ID(N'[dbo].[AraStok2Set]', 'U') IS NOT NULL
    DROP TABLE [dbo].[AraStok2Set];
GO
IF OBJECT_ID(N'[dbo].[AraStok3Set]', 'U') IS NOT NULL
    DROP TABLE [dbo].[AraStok3Set];
GO
IF OBJECT_ID(N'[dbo].[AraStok4Set]', 'U') IS NOT NULL
    DROP TABLE [dbo].[AraStok4Set];
GO
IF OBJECT_ID(N'[dbo].[hat1Set]', 'U') IS NOT NULL
    DROP TABLE [dbo].[hat1Set];
GO
IF OBJECT_ID(N'[dbo].[hat2Set]', 'U') IS NOT NULL
    DROP TABLE [dbo].[hat2Set];
GO
IF OBJECT_ID(N'[dbo].[hat3Set]', 'U') IS NOT NULL
    DROP TABLE [dbo].[hat3Set];
GO
IF OBJECT_ID(N'[dbo].[hat4Set]', 'U') IS NOT NULL
    DROP TABLE [dbo].[hat4Set];
GO

-- --------------------------------------------------
-- Creating all tables
-- --------------------------------------------------

-- Creating table 'AnaStokSet'
CREATE TABLE [dbo].[AnaStokSet] (
    [Id] int IDENTITY(1,1) NOT NULL,
    [AraStok1Id] int  NOT NULL,
    [AraStok2Id] int  NOT NULL,
    [AraStok3Id] int  NOT NULL,
    [AraStok4Id] int  NOT NULL
);
GO

-- Creating table 'AraStok1Set'
CREATE TABLE [dbo].[AraStok1Set] (
    [Id] int IDENTITY(1,1) NOT NULL,
    [kapasite1] nvarchar(max)  NOT NULL
);
GO

-- Creating table 'AraStok2Set'
CREATE TABLE [dbo].[AraStok2Set] (
    [Id] int IDENTITY(1,1) NOT NULL,
    [kapasite2] nvarchar(max)  NOT NULL
);
GO

-- Creating table 'AraStok3Set'
CREATE TABLE [dbo].[AraStok3Set] (
    [Id] int IDENTITY(1,1) NOT NULL,
    [kapasite3] nvarchar(max)  NOT NULL
);
GO

-- Creating table 'AraStok4Set'
CREATE TABLE [dbo].[AraStok4Set] (
    [Id] int IDENTITY(1,1) NOT NULL,
    [kapasite4] nvarchar(max)  NOT NULL
);
GO

-- Creating table 'hat1Set'
CREATE TABLE [dbo].[hat1Set] (
    [Id] int IDENTITY(1,1) NOT NULL,
    [AraStok1Id] int  NOT NULL,
    [A] nvarchar(max)  NOT NULL,
    [B] nvarchar(max)  NOT NULL,
    [C] nvarchar(max)  NOT NULL,
    [D] nvarchar(max)  NOT NULL,
    [hiz1] nvarchar(max)  NOT NULL
);
GO

-- Creating table 'hat2Set'
CREATE TABLE [dbo].[hat2Set] (
    [Id] int IDENTITY(1,1) NOT NULL,
    [AraStok2Id] int  NOT NULL,
    [A] nvarchar(max)  NOT NULL,
    [B] nvarchar(max)  NOT NULL,
    [hiz2] nvarchar(max)  NOT NULL
);
GO

-- Creating table 'hat3Set'
CREATE TABLE [dbo].[hat3Set] (
    [Id] int IDENTITY(1,1) NOT NULL,
    [AraStok3Id] int  NOT NULL,
    [C] nvarchar(max)  NOT NULL,
    [D] nvarchar(max)  NOT NULL,
    [hiz3] nvarchar(max)  NOT NULL
);
GO

-- Creating table 'hat4Set'
CREATE TABLE [dbo].[hat4Set] (
    [Id] int IDENTITY(1,1) NOT NULL,
    [AraStok4Id] int  NOT NULL,
    [B] nvarchar(max)  NOT NULL,
    [C] nvarchar(max)  NOT NULL,
    [D] nvarchar(max)  NOT NULL,
    [hiz4] nvarchar(max)  NOT NULL
);
GO

-- --------------------------------------------------
-- Creating all PRIMARY KEY constraints
-- --------------------------------------------------

-- Creating primary key on [Id] in table 'AnaStokSet'
ALTER TABLE [dbo].[AnaStokSet]
ADD CONSTRAINT [PK_AnaStokSet]
    PRIMARY KEY CLUSTERED ([Id] ASC);
GO

-- Creating primary key on [Id] in table 'AraStok1Set'
ALTER TABLE [dbo].[AraStok1Set]
ADD CONSTRAINT [PK_AraStok1Set]
    PRIMARY KEY CLUSTERED ([Id] ASC);
GO

-- Creating primary key on [Id] in table 'AraStok2Set'
ALTER TABLE [dbo].[AraStok2Set]
ADD CONSTRAINT [PK_AraStok2Set]
    PRIMARY KEY CLUSTERED ([Id] ASC);
GO

-- Creating primary key on [Id] in table 'AraStok3Set'
ALTER TABLE [dbo].[AraStok3Set]
ADD CONSTRAINT [PK_AraStok3Set]
    PRIMARY KEY CLUSTERED ([Id] ASC);
GO

-- Creating primary key on [Id] in table 'AraStok4Set'
ALTER TABLE [dbo].[AraStok4Set]
ADD CONSTRAINT [PK_AraStok4Set]
    PRIMARY KEY CLUSTERED ([Id] ASC);
GO

-- Creating primary key on [Id] in table 'hat1Set'
ALTER TABLE [dbo].[hat1Set]
ADD CONSTRAINT [PK_hat1Set]
    PRIMARY KEY CLUSTERED ([Id] ASC);
GO

-- Creating primary key on [Id] in table 'hat2Set'
ALTER TABLE [dbo].[hat2Set]
ADD CONSTRAINT [PK_hat2Set]
    PRIMARY KEY CLUSTERED ([Id] ASC);
GO

-- Creating primary key on [Id] in table 'hat3Set'
ALTER TABLE [dbo].[hat3Set]
ADD CONSTRAINT [PK_hat3Set]
    PRIMARY KEY CLUSTERED ([Id] ASC);
GO

-- Creating primary key on [Id] in table 'hat4Set'
ALTER TABLE [dbo].[hat4Set]
ADD CONSTRAINT [PK_hat4Set]
    PRIMARY KEY CLUSTERED ([Id] ASC);
GO

-- --------------------------------------------------
-- Creating all FOREIGN KEY constraints
-- --------------------------------------------------

-- Creating foreign key on [AraStok1Id] in table 'AnaStokSet'
ALTER TABLE [dbo].[AnaStokSet]
ADD CONSTRAINT [FK_AraStok1AnaStok]
    FOREIGN KEY ([AraStok1Id])
    REFERENCES [dbo].[AraStok1Set]
        ([Id])
    ON DELETE NO ACTION ON UPDATE NO ACTION;
GO

-- Creating non-clustered index for FOREIGN KEY 'FK_AraStok1AnaStok'
CREATE INDEX [IX_FK_AraStok1AnaStok]
ON [dbo].[AnaStokSet]
    ([AraStok1Id]);
GO

-- Creating foreign key on [AraStok2Id] in table 'AnaStokSet'
ALTER TABLE [dbo].[AnaStokSet]
ADD CONSTRAINT [FK_AraStok2AnaStok]
    FOREIGN KEY ([AraStok2Id])
    REFERENCES [dbo].[AraStok2Set]
        ([Id])
    ON DELETE NO ACTION ON UPDATE NO ACTION;
GO

-- Creating non-clustered index for FOREIGN KEY 'FK_AraStok2AnaStok'
CREATE INDEX [IX_FK_AraStok2AnaStok]
ON [dbo].[AnaStokSet]
    ([AraStok2Id]);
GO

-- Creating foreign key on [AraStok3Id] in table 'AnaStokSet'
ALTER TABLE [dbo].[AnaStokSet]
ADD CONSTRAINT [FK_AraStok3AnaStok]
    FOREIGN KEY ([AraStok3Id])
    REFERENCES [dbo].[AraStok3Set]
        ([Id])
    ON DELETE NO ACTION ON UPDATE NO ACTION;
GO

-- Creating non-clustered index for FOREIGN KEY 'FK_AraStok3AnaStok'
CREATE INDEX [IX_FK_AraStok3AnaStok]
ON [dbo].[AnaStokSet]
    ([AraStok3Id]);
GO

-- Creating foreign key on [AraStok4Id] in table 'AnaStokSet'
ALTER TABLE [dbo].[AnaStokSet]
ADD CONSTRAINT [FK_AraStok4AnaStok]
    FOREIGN KEY ([AraStok4Id])
    REFERENCES [dbo].[AraStok4Set]
        ([Id])
    ON DELETE NO ACTION ON UPDATE NO ACTION;
GO

-- Creating non-clustered index for FOREIGN KEY 'FK_AraStok4AnaStok'
CREATE INDEX [IX_FK_AraStok4AnaStok]
ON [dbo].[AnaStokSet]
    ([AraStok4Id]);
GO

-- Creating foreign key on [AraStok1Id] in table 'hat1Set'
ALTER TABLE [dbo].[hat1Set]
ADD CONSTRAINT [FK_AraStok1hat1]
    FOREIGN KEY ([AraStok1Id])
    REFERENCES [dbo].[AraStok1Set]
        ([Id])
    ON DELETE NO ACTION ON UPDATE NO ACTION;
GO

-- Creating non-clustered index for FOREIGN KEY 'FK_AraStok1hat1'
CREATE INDEX [IX_FK_AraStok1hat1]
ON [dbo].[hat1Set]
    ([AraStok1Id]);
GO

-- Creating foreign key on [AraStok2Id] in table 'hat2Set'
ALTER TABLE [dbo].[hat2Set]
ADD CONSTRAINT [FK_AraStok2hat2]
    FOREIGN KEY ([AraStok2Id])
    REFERENCES [dbo].[AraStok2Set]
        ([Id])
    ON DELETE NO ACTION ON UPDATE NO ACTION;
GO

-- Creating non-clustered index for FOREIGN KEY 'FK_AraStok2hat2'
CREATE INDEX [IX_FK_AraStok2hat2]
ON [dbo].[hat2Set]
    ([AraStok2Id]);
GO

-- Creating foreign key on [AraStok3Id] in table 'hat3Set'
ALTER TABLE [dbo].[hat3Set]
ADD CONSTRAINT [FK_AraStok3hat3]
    FOREIGN KEY ([AraStok3Id])
    REFERENCES [dbo].[AraStok3Set]
        ([Id])
    ON DELETE NO ACTION ON UPDATE NO ACTION;
GO

-- Creating non-clustered index for FOREIGN KEY 'FK_AraStok3hat3'
CREATE INDEX [IX_FK_AraStok3hat3]
ON [dbo].[hat3Set]
    ([AraStok3Id]);
GO

-- Creating foreign key on [AraStok4Id] in table 'hat4Set'
ALTER TABLE [dbo].[hat4Set]
ADD CONSTRAINT [FK_AraStok4hat4]
    FOREIGN KEY ([AraStok4Id])
    REFERENCES [dbo].[AraStok4Set]
        ([Id])
    ON DELETE NO ACTION ON UPDATE NO ACTION;
GO

-- Creating non-clustered index for FOREIGN KEY 'FK_AraStok4hat4'
CREATE INDEX [IX_FK_AraStok4hat4]
ON [dbo].[hat4Set]
    ([AraStok4Id]);
GO

-- --------------------------------------------------
-- Script has ended
-- --------------------------------------------------