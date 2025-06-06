SELECT
  Visits.customer_id,
  COUNT(Visits.visit_id) AS count_no_trans
FROM
  Visits
WHERE
  NOT EXISTS (
    SELECT 1
    FROM Transactions
    WHERE Transactions.visit_id = Visits.visit_id
  )
GROUP BY
  Visits.customer_id;
