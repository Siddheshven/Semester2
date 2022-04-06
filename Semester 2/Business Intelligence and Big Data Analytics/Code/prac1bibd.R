#install.packages("tm")
#require("tm")
#install.pacakges("devtools")

readinteger <- function()
{
  n <- readline(prompt ="enter value for k-1:")
  k <- as.integer(n)
  u1 <- readLines("C:/temp/InputFile.txt")
  shingle <- 0
  i <- 0
  while (i < nchar(u1) - k + 1)
    {
    shingle[i] <- substr(u1,start=i,stop=i+k)
    print(shingle[i])
    i = i + 1
    }
}
if(interactive())readinteger()
