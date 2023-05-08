class airline_tickets:
    # initialiser 
    def __init__(self, departure, arrival, flight_number, seat_number):
        self.departure = departure
        self.arrival = arrival
        self.flight_number = flight_number
        self.seat_number = seat_number
    #instance method
    def display_ticket_details(self):
        print(f'departure : {self.departure}, arrival : {self.arrival}, flight number : {self.flight_number}, seat number : {self.seat_number}')

booking1 = airline_tickets('Mumbai', 'Pune', 'AIR_12345', '12F')
booking1.display_ticket_details()        
