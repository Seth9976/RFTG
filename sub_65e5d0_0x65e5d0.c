// 函数名称: sub_65e5d0
// 虚拟地址: 0x65e5d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_65e5d0(int32_t* arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t ecx = arg1[2]
    int32_t ecx = arg1[2]
    int32_t edx = arg1[3]
    int32_t var_1c = ecx
    int32_t ebx = edx
    int32_t result_1 = 0xffffffff
    int32_t var_10 = 0xffffffff
    
    while (true)
        int32_t edx_1 = adc.d(edx, 0xffffffff, ecx u>= 0x10000)
        int32_t var_c_1 = ecx - 0x10000
        int32_t var_8_1 = edx_1
        
        if (edx_1 s<= 0 && (edx_1 s< 0 || ecx - 0x10000 u< 0))
            var_c_1 = 0
            var_8_1 = 0
            edx_1 = 0
        
        int32_t ecx_2 = *arg1
        int32_t eax_3
        
        if (ecx_2 == 0)
            eax_3 = 0xffffff7f
        else
            int32_t eax = arg1[0xb1]
            int32_t eax_1
            
            if (eax != 0)
                eax_1 = eax(ecx_2, var_c_1, edx_1, 0)
            
            if (eax == 0 || eax_1 == 0xffffffff)
                eax_3 = 0xffffff80
            else
                arg1[2] = var_c_1
                arg1[3] = var_8_1
                sub_646250(&arg1[6])
                eax_3 = 0
        
        int32_t result
        int32_t edx_4
        edx_4:result = sx.q(eax_3)
        
        if ((result | edx_4) != 0)
            return result
        
        int32_t temp1_1 = arg1[3]
        
        if (temp1_1 s<= ebx && (temp1_1 s< ebx || arg1[2] u< var_1c))
            while (true)
                *arg2 = 0
                arg2[1] = 0
                arg2[2] = 0
                arg2[3] = 0
                int32_t result_3
                int32_t edx_7
                result_3, edx_7 =
                    sub_65e4c0(arg1, arg2, var_1c - arg1[2], sbb.d(ebx, arg1[3], var_1c u< arg1[2]))
                
                if (result_3 == 0xffffff80 && edx_7 == 0xffffffff)
                    return 0xffffff80
                
                if (edx_7 s< 0)
                    break
                
                if (edx_7 s<= 0 && result_3 u< 0)
                    break
                
                result_1 = result_3
                var_10 = edx_7
                int32_t temp6_1 = arg1[3]
                
                if (temp6_1 s>= ebx)
                    if (temp6_1 s> ebx)
                        break
                    
                    if (arg1[2] u>= var_1c)
                        break
        
        int32_t edx_9 = result_1 & var_10
        
        if (edx_9 != 0xffffffff)
            if (arg2[1] != 0)
                result = result_1
            else
                int32_t var_28_3 = var_10
                int32_t result_2 = result_1
                int32_t edx_10
                edx_10:result = sx.q(sub_65e460(arg1, edx_9, result_1))
                int32_t ecx_12 = result | edx_10
                
                if (ecx_12 == 0)
                    int32_t eax_8
                    int32_t edx_11
                    eax_8, edx_11 = sub_65e4c0(arg1, arg2, 0x10000, ecx_12)
                    
                    if (edx_11 s<= 0 && (edx_11 s< 0 || eax_8 u< 0))
                        return 0xffffff7f
                    
                    result = result_1
            
            return result
        
        ecx = var_c_1
        edx = var_8_1
}
