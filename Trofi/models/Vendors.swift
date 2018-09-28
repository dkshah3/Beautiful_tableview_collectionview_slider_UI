//
//  Vendors.swift
//  Trofi
//
//  Created by Dhrumil Shah on 2017-08-16.
// f Copyright © 2017 makeschool. All rights reserved.
//

import Foundation
import FirebaseDatabase.FIRDataSnapshot
import UIKit
import SwiftyJSON


class Vendors {
    
    var priceRange: String
    var type: String
    var vendorName: String
    var distance: String
    var pickupI: String
    var pickupF: String
    var MealsLeft: String
    var vendorLogo: String
    
    init(json:JSON) { 
        self.priceRange = json["priceRange"].stringValue
        self.type = json["type"].stringValue
        self.vendorName = json["vendorName"].stringValue
        self.distance = json["distance"].stringValue
        self.pickupI = json["pickupI"].stringValue
        self.pickupF = json["pickupF"].stringValue
        self.MealsLeft = json["MealsLeft"].stringValue
        self.vendorLogo = json["vendorLogo"].stringValue

}
}
