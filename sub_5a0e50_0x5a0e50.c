// 函数名称: sub_5a0e50
// 虚拟地址: 0x5a0e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a0e50(uint32_t* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: if (sub_598c80(arg3, arg3, arg4) == 0)
    if (sub_598c80(arg3, arg3, arg4) == 0)
        int32_t* var_18 = arg4
        bool cond:0_1 = sub_59aa60(&var_18, 2) != 0
        int32_t* eax_3 = var_18
        
        if (cond:0_1)
            if (arg3 != 0)
                *arg3 = *eax_3
            
            if (arg1 != 0)
                *arg1 = eax_3[1]
            
            if (arg5 != 0)
                *arg5 = eax_3[2]
        else
            eax_3[0x2a] = eax_3[0x2c]
            int32_t eax_5
            uint32_t* ecx_3
            uint32_t* edx_1
            eax_5, ecx_3, edx_1 = sub_59ede0(arg4, arg3, arg5)
            
            if (eax_5 == 0)
                int32_t* var_2c_2 = arg5
                uint32_t* var_30_2 = arg1
                int32_t eax_7
                uint32_t* ecx_4
                uint32_t* edx_2
                eax_7, ecx_4, edx_2 = sub_5a0800(arg4, edx_1, ecx_3, arg3)
                
                if (eax_7 == 0)
                    int32_t* var_2c_3 = arg5
                    uint32_t* var_30_3 = arg1
                    int32_t eax_9 = sub_5a09d0(arg4, edx_2, ecx_4, arg3)
                    
                    if (eax_9 == 0)
                        int32_t eax_10 = sub_5a0ad0(eax_9, arg3, arg4, arg1, arg5)
                        
                        if (eax_10 == 0)
                            int32_t eax_11
                            uint32_t* ecx_8
                            uint32_t* edx_5
                            eax_11, ecx_8, edx_5 = sub_5a0610(eax_10, arg5, arg1, arg4, arg3)
                            
                            if (eax_11 == 0)
                                int32_t* var_2c_6 = arg5
                                uint32_t* var_30_6 = arg1
                                int32_t result = sub_59c8f0(arg4, edx_5, ecx_8, arg3)
                                
                                if (result == 0)
                                    data_273ac1c = "unknown image type"
                                    return result
    
    return 1
}
