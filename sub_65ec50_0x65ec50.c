// 函数名称: sub_65ec50
// 虚拟地址: 0x65ec50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65ec50(int32_t* arg1 @ esi, void* arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t var_10 = 0
    int32_t eax = arg1[0x72]
    int32_t var_8 = 0xffffffff
    
    while (true)
        void var_2c
        void* eax_1 = sub_645df0(&arg1[6], &var_2c)
        
        if (eax_1 s< 0)
            int32_t eax_2
            int32_t edx_1
            edx_1:eax_2 = sx.q(eax_1)
            int32_t temp1_1 = arg1[2]
            arg1[2] -= eax_2
            arg1[3] = sbb.d(arg1[3], edx_1, temp1_1 u< eax_2)
        else if (eax_1 != 0)
            int32_t ecx_1 = arg1[2]
            int32_t edi_2 = arg1[3]
            int32_t eax_7
            int32_t edx_3
            edx_3:eax_7 = sx.q(eax_1)
            int32_t var_1c_1 = ecx_1
            arg1[2] = eax_7 + ecx_1
            arg1[3] = adc.d(edx_3, edi_2, eax_7 + ecx_1 u< eax_7)
            
            if (edi_2 s< 0)
                break
            
            if (edi_2 s<= 0 && ecx_1 u< 0)
                break
            
            if (sub_645520(&var_2c) != 0)
                break
            
            if (sub_6455f0(&var_2c) == eax)
                sub_645f20(&arg1[0x1e], &var_2c)
                void var_4c
                int32_t eax_11 = sub_646420(&arg1[0x1e], &var_4c)
                bool cond:4_1 = eax_11 s<= 0
                
                if (eax_11 != 0)
                    int32_t edi_3 = var_8
                    int32_t i
                    
                    do
                        if (not(cond:4_1))
                            int32_t eax_13 = sub_68b570(arg2, &var_4c)
                            
                            if (edi_3 != 0xffffffff)
                                int32_t eax_16
                                int32_t edx_5
                                edx_5:eax_16 = sx.q((eax_13 + edi_3) s>> 2)
                                int32_t result_1 = result
                                result += eax_16
                                var_10 = adc.d(var_10, edx_5, result_1 + eax_16 u< result_1)
                            
                            edi_3 = eax_13
                        
                        i = sub_646420(&arg1[0x1e], &var_4c)
                        cond:4_1 = i s<= 0
                    while (i != 0)
                    var_8 = edi_3
                
                int32_t eax_17
                int32_t edx_6
                eax_17, edx_6 = sub_645560(&var_2c)
                
                if ((eax_17 & edx_6) != 0xffffffff)
                    int32_t eax_19
                    int32_t edx_7
                    eax_19, edx_7 = sub_645560(&var_2c)
                    int32_t edx_8 = sbb.d(edx_7, var_10, eax_19 u< result)
                    result = eax_19 - result
                    var_10 = edx_8
                    break
        else
            *__errno() = 0
            
            if (arg1[0xb0] == 0)
                break
            
            if (*arg1 == 0)
                break
            
            int32_t eax_6 = arg1[0xb0](sub_645d30(&arg1[6], 0x800), 1, 0x800, *arg1)
            bool cond:3_1 = eax_6 == 0
            
            if (eax_6 s> 0)
                sub_645dc0(&arg1[6], eax_6)
                cond:3_1 = eax_6 == 0
            
            if (cond:3_1)
                __errno()
                break
            
            if (eax_6 s< 0)
                break
    
    if (var_10 s> 0)
        return result
    
    if (var_10 s>= 0 && result u>= 0)
        return result
    
    return 0
}
