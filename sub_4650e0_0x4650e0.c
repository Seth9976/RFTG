// 函数名称: sub_4650e0
// 虚拟地址: 0x4650e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4650e0(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* ecx = arg2
    int32_t* ecx = arg2
    int32_t ebx_2 = (arg1 - ecx) s/ 0x14
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(ebx_2)
    int32_t result = (eax_3 - edx_3) s>> 1
    
    if (result s> 0)
        int32_t result_6 = result * 2 + 2
        void* edx_5 = &ecx[result * 5]
        
        while (true)
            int32_t var_24 = *(edx_5 - 0x14)
            int32_t var_20_1 = *(edx_5 - 0x10)
            int32_t var_1c_1 = *(edx_5 - 0xc)
            int32_t result_2 = result - 1
            int32_t result_4 = result_6 - 2
            int32_t var_18_1 = *(edx_5 - 8)
            int32_t result_1 = result_2
            int32_t result_5 = result_4
            int32_t var_14_1 = *(edx_5 - 4)
            int32_t result_3 = result_2
            bool cond:0_1 = result_4 != ebx_2
            
            if (result_4 s< ebx_2)
                do
                    void* eax_6 = &ecx[result_4 * 5]
                    
                    if (arg3(eax_6, eax_6 - 0x14) != 0)
                        result_4 -= 1
                    
                    int32_t* eax_8 = &arg2[result_4 * 5]
                    int32_t* ecx_3 = &arg2[result_3 * 5]
                    *ecx_3 = *eax_8
                    ecx_3[1] = eax_8[1]
                    ecx_3[2] = eax_8[2]
                    ecx_3[3] = eax_8[3]
                    result_3 = result_4
                    result_4 = result_4 * 2 + 2
                    ecx_3[4] = eax_8[4]
                    ecx = arg2
                    cond:0_1 = result_4 != ebx_2
                while (result_4 s< ebx_2)
                
                result_2 = result_1
            
            if (not(cond:0_1))
                int32_t esi_1 = result_3 * 5
                int32_t edx_14 = ebx_2 * 5
                ecx[esi_1] = ecx[edx_14 - 5]
                void* esi_2 = &ecx[esi_1]
                *(esi_2 + 4) = ecx[edx_14 - 4]
                *(esi_2 + 8) = ecx[edx_14 - 3]
                *(esi_2 + 0xc) = ecx[edx_14 - 2]
                *(esi_2 + 0x10) = ecx[edx_14 - 1]
                result_3 = ebx_2 - 1
            
            int32_t var_34_2 = arg3
            int32_t* var_38_2 = &var_24
            result = sub_465850(result_3, arg3, ecx, ecx, result_2)
            
            if (result_1 s<= 0)
                break
            
            result = result_1
            ecx = arg2
            edx_5 -= 0x14
            result_6 = result_5
    
    return result
}
