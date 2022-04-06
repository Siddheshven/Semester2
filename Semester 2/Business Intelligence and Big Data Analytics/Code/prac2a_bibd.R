# install.packages(c("tm", "ggplot2", "textreuse", "devtools"))
require("tm")
require("ggplot2")

my.corpus <- Corpus(DirSource("E://Semester 2//Business Intelligence and Big Data Analytics//input files//prac2a"))
my.corpus <- tm.map(my.corpus, removeWords, stopwords("english"))
my.tdm <- TermDocumentMatrix(my.corpus)

#inspect(my.tdm)

my.dtm <- DocumentTermMatrix(my.corpus, control = list(weighting = weightTfldf, stopwords = TRUE))

#inspect(my.dtm)

my.df <- as.data.frame(inspect(my.tdm))
my.df.scale <- scale(my.df)

d <- dist(my.df.scale, method = "euclidean")
fit <- hclust(d, method = "ward.D")
plot(fit)