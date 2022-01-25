select * from(select distinct city,length(city) 
from station order by length(city) asc,city asc) where rownum=1 
union
select * from(select distinct city,length(city) 
from station order by length(city) desc,city desc) where rownum=1;
