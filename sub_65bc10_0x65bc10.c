// 函数名称: sub_65bc10
// 虚拟地址: 0x65bc10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_65bc10(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5, void* arg6, void* arg7, void* arg8)
{
    // 第一条实际指令: void* esi_1 = arg6 - arg5
    void* esi_1 = arg6 - arg5
    void* edi = arg7
    void* ecx = arg3 - edi
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(ecx)
    int32_t temp0 = divs.dp.d(sx.q(ecx), esi_1)
    void* var_8
    
    if (ecx s>= 0)
        var_8 = temp0 + 1
    else
        var_8 = temp0 - 1
    
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = sx.q(temp0 * esi_1)
    int32_t ebx_3 = (eax_1 ^ edx) - edx - ((eax_6 ^ edx_4) - edx_4)
    void* result = arg4
    void* ecx_2 = nullptr
    
    if (result s> arg6)
        arg4 = arg6
        result = arg6
    
    if (arg5 s< result)
        *(arg8 + (arg5 << 2)) =
            fconvert.s(fconvert.t(*((edi << 2) + &data_82df00)) * fconvert.t(*(arg8 + (arg5 << 2))))
        result = arg4
    
    int32_t edx_7 = arg5 + 1
    
    if (edx_7 s< result)
        result -= edx_7
        
        if (result s>= 4)
            result = arg8 + (edx_7 << 2) + 8
            arg6 = ((arg4 - edx_7 - 4) u>> 2) + 1
            void* i
            
            do
                void* ecx_3 = ecx_2 + ebx_3
                void* edi_1
                
                if (ecx_3 s< esi_1)
                    edi_1 = edi + temp0
                else
                    ecx_3 -= esi_1
                    edi_1 = edi + var_8
                
                void* ecx_4 = ecx_3 + ebx_3
                *(result - 8) =
                    fconvert.s(fconvert.t(*((edi_1 << 2) + &data_82df00)) * fconvert.t(*(result - 8)))
                void* edi_2
                
                if (ecx_4 s< esi_1)
                    edi_2 = edi_1 + temp0
                else
                    ecx_4 -= esi_1
                    edi_2 = edi_1 + var_8
                
                void* ecx_5 = ecx_4 + ebx_3
                *(result - 4) =
                    fconvert.s(fconvert.t(*((edi_2 << 2) + &data_82df00)) * fconvert.t(*(result - 4)))
                void* edi_3
                
                if (ecx_5 s< esi_1)
                    edi_3 = edi_2 + temp0
                else
                    ecx_5 -= esi_1
                    edi_3 = edi_2 + var_8
                
                ecx_2 = ecx_5 + ebx_3
                *result = fconvert.s(fconvert.t(*((edi_3 << 2) + &data_82df00)) * fconvert.t(*result))
                
                if (ecx_2 s< esi_1)
                    edi = edi_3 + temp0
                else
                    ecx_2 -= esi_1
                    edi = edi_3 + var_8
                
                result += 0x10
                i = arg6
                arg6 -= 1
                *(result - 0xc) =
                    fconvert.s(fconvert.t(*((edi << 2) + &data_82df00)) * fconvert.t(*(result - 0xc)))
            while (i != 1)
            edx_7 += (((arg4 - edx_7 - 4) u>> 2) + 1) << 2
        
        if (edx_7 s< arg4)
            float* edi_4 = (edi << 2) + &data_82df00
            
            do
                ecx_2 += ebx_3
                
                if (ecx_2 s< esi_1)
                    edi_4 = &edi_4[temp0]
                else
                    ecx_2 -= esi_1
                    edi_4 += var_8 * 4
                
                result = arg8
                long double x87_r7_12 = fconvert.t(*edi_4) * fconvert.t(*(result + (edx_7 << 2)))
                edx_7 += 1
                *(result + (edx_7 << 2) - 4) = fconvert.s(x87_r7_12)
            while (edx_7 s< arg4)
    
    return result
}
