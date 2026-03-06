// 函数名称: sub_464d50
// 虚拟地址: 0x464d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_464d50(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ edi, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx_1 = (arg3 - arg4) s>> 3
    int32_t ecx_1 = (arg3 - arg4) s>> 3
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(ecx_1)
    int32_t result = (eax_1 - edx) s>> 1
    int32_t var_c = ecx_1
    
    if (result s> 0)
        int32_t result_6 = result * 2 + 2
        void* edx_1 = &arg4[result * 2]
        
        while (true)
            int32_t result_2 = result - 1
            int32_t result_4 = result_6 - 2
            int32_t edx_3 = *(edx_1 - 4)
            int32_t var_20 = *(edx_1 - 8)
            int32_t result_1 = result_2
            int32_t result_5 = result_4
            int32_t var_1c_1 = edx_3
            int32_t result_3 = result_2
            bool cond:0_1 = result_4 != ecx_1
            
            if (result_4 s< ecx_1)
                do
                    void* eax_3 = &arg4[result_4 * 2]
                    
                    if (arg5(eax_3, eax_3 - 8) != 0)
                        result_4 -= 1
                    
                    edx_3 = arg4[result_4 * 2]
                    arg4[result_3 * 2] = edx_3
                    arg4[result_3 * 2 + 1] = arg4[result_4 * 2 + 1]
                    result_3 = result_4
                    result_4 = result_4 * 2 + 2
                while (result_4 s< var_c)
                
                ecx_1 = var_c
                result_2 = result_1
                cond:0_1 = result_4 != ecx_1
            
            if (not(cond:0_1))
                arg4[result_3 * 2] = arg4[ecx_1 * 2 - 2]
                edx_3 = arg4[ecx_1 * 2 - 1]
                arg4[result_3 * 2 + 1] = edx_3
                result_3 = ecx_1 - 1
            
            int32_t var_2c_2 = arg5
            int32_t* var_30_2 = &var_20
            result = sub_465770(result_3, edx_3, arg5, arg4, result_2)
            
            if (result_1 s<= 0)
                break
            
            result = result_1
            ecx_1 = var_c
            result_6 = result_5
            edx_1 -= 8
    
    return result
}
