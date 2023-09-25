#include "7seg_clock.h"
#include "main.h"


void display7SEG(int idx ,int num){
	if (idx == 0){
	switch(num){
	case 0:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_SET ) ;
		break;
	case 1:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_SET ) ;
		break;
	case 2:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 3:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 4:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 5:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 6:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 7:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_SET ) ;
		break;
	case 8:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	case 9:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;
		break;
	default:
		HAL_GPIO_WritePin ( LED7_0_GPIO_Port , LED7_0_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port , LED7_1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port , LED7_2_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port , LED7_3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port , LED7_4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port , LED7_5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port , LED7_6_Pin , GPIO_PIN_RESET ) ;

	}
  }
	else if (idx == 1){
		switch(num){
			case 0:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_SET ) ;
				break;
			case 1:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_SET ) ;
				break;
			case 2:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
				break;
			case 3:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
				break;
			case 4:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
				break;
			case 5:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
				break;
			case 6:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
				break;
			case 7:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_SET ) ;
				break;
			case 8:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
				break;
			case 9:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
				break;
			default:
				HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_SET ) ;
				HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
				HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;

			}

	}
}
