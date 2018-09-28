//
//  PopupViewController.swift
//  Trofi
//
//  Created by Dhrumil Shah on 2017-09-01.
//  Copyright © 2017 makeschool. All rights reserved.
//


import UIKit
import MIBlurPopup


class PopupViewController: UIViewController {
    
    
    @IBOutlet weak var dismissButton: UIButton! {
        didSet {
            dismissButton.layer.cornerRadius = dismissButton.frame.height/2
        }
    }
    
    
    @IBOutlet weak var popupContentContainerView: UIView!
    @IBOutlet weak var popupMainView: UIView! {
        didSet {
            popupMainView.layer.cornerRadius = 10
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
    }
    
    
    // MARK: - IBActions
    
    @IBAction func dismissButtonTapped(_ sender: Any) {
        
        dismiss(animated: true)
        
    }
 
    
}

// MARK: - MIBlurPopupDelegate

extension PopupViewController: MIBlurPopupDelegate {
    
    var popupView: UIView {
        return popupContentContainerView ?? UIView()
    }
    var blurEffectStyle: UIBlurEffectStyle {
        return .dark
    }
    var initialScaleAmmount: CGFloat {
        return 0.7
    }
    var animationDuration: TimeInterval {
        return 0.5
    }
    
}
