select email
from person
GROUP BY email
HAVING count(*) > 1;