/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000181321278_1399987578_init();
    work_m_00000000004110827743_1550381489_init();
    work_m_00000000004044570636_1778518254_init();
    work_m_00000000002367239053_2643137959_init();
    work_m_00000000001812960348_1122134793_init();
    work_m_00000000003121330173_0654690909_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003121330173_0654690909");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
