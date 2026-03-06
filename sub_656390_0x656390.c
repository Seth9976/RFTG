// 函数名称: sub_656390
// 虚拟地址: 0x656390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_656390(int32_t arg1, void* arg2, int32_t arg3, float* arg4, float* arg5, int32_t arg6)
{
    // 第一条实际指令: void* result = *(arg2 + 4)
    void* result = *(arg2 + 4)
    float* ecx = 1
    int32_t esi = 1
    void* result_1 = nullptr
    int32_t var_10 = 1
    
    if (result s> 0)
        void* var_14_1 = arg2 + 8
        void* var_18_1 = result
        int32_t edi
        int32_t var_28_1 = edi
        void* i
        
        do
            float* ebx_1 = *var_14_1
            float* edi_3 = ebx_1 * ecx
            int32_t temp0_1 = divs.dp.d(sx.q(arg3), edi_3)
            int32_t edx_3 = temp0_1 * ecx
            
            if (ebx_1 == 4)
                int32_t eax_16 = temp0_1 + esi
                int32_t var_2c_5 = arg6 + ((eax_16 + temp0_1) << 2) - 4
                float* eax_18
                float* edx_13
                
                if (result_1 == 0)
                    edx_13 = arg5
                    eax_18 = arg4
                else
                    edx_13 = arg4
                    eax_18 = arg5
                
                sub_654670(eax_18, edx_13, ecx, temp0_1, ecx, arg6 + (esi << 2) - 4, 
                    arg6 + (eax_16 << 2) - 4)
                unimplemented  {call 0x654670}
                result = 1 - result_1
                result_1 = result
            else if (ebx_1 == 2)
                float* var_30_3
                float* eax_13
                
                if (result_1 == 0)
                    int32_t var_2c_4 = arg6 + (esi << 2) - 4
                    var_30_3 = arg5
                    eax_13 = arg4
                else
                    int32_t var_2c_3 = arg6 + (esi << 2) - 4
                    eax_13 = arg5
                    var_30_3 = arg4
                
                result = sub_653e90(eax_13, temp0_1, ecx, ecx, var_30_3)
                result_1 = 1 - result_1
            else if (ebx_1 == 3)
                int32_t var_2c_2 = arg6 + ((temp0_1 + esi) << 2) - 4
                int32_t var_30_2 = arg6 + (esi << 2) - 4
                float* var_34_2
                float* eax_10
                
                if (result_1 == 0)
                    var_34_2 = arg5
                    eax_10 = arg4
                else
                    var_34_2 = arg4
                    eax_10 = arg5
                
                result = sub_654210(eax_10, arg6 + (esi << 2) - 4, ecx, temp0_1, ecx, var_34_2)
                result_1 = 1 - result_1
            else
                int32_t var_2c_1 = arg6 + (esi << 2) - 4
                float* eax_6
                float* esi_1
                
                if (result_1 == 0)
                    esi_1 = arg5
                    eax_6 = arg4
                else
                    esi_1 = arg4
                    eax_6 = arg5
                
                float* var_30_1 = esi_1
                result = sub_654fb0(eax_6, esi_1, temp0_1, edx_3, ecx, ebx_1, ecx, edx_3, eax_6)
                int16_t top = top - 1
                unimplemented  {call 0x654fb0}
                esi = var_10
                
                if (temp0_1 == 1)
                    result_1 = temp0_1 - result_1
            
            var_14_1 += 4
            ecx = edi_3
            esi += (ebx_1 - 1) * temp0_1
            i = var_18_1
            var_18_1 -= 1
            var_10 = esi
        while (i != 1)
        
        if (result_1 != 0)
            int32_t ebx_6 = 0
            
            if (arg3 s>= 4)
                result = &arg4[1]
                void* ecx_5 = &arg5[3]
                int32_t i_3 = ((arg3 - 4) u>> 2) + 1
                ebx_6 = i_3 << 2
                int32_t i_1
                
                do
                    unimplemented  {fld st0, dword [ecx-0xc]}
                    result += 0x10
                    *(result - 0x14) = fconvert.s(unimplemented  {fstp dword [eax-0x14], st0})
                    unimplemented  {fstp dword [eax-0x14], st0}
                    ecx_5 += 0x10
                    i_1 = i_3
                    i_3 -= 1
                    unimplemented  {fld st0, dword [esi+eax-0x10]}
                    *(result - 0x10) = fconvert.s(unimplemented  {fstp dword [eax-0x10], st0})
                    unimplemented  {fstp dword [eax-0x10], st0}
                    unimplemented  {fld st0, dword [ecx-0x14]}
                    *(result - 0xc) = fconvert.s(unimplemented  {fstp dword [eax-0xc], st0})
                    unimplemented  {fstp dword [eax-0xc], st0}
                    unimplemented  {fld st0, dword [ecx-0x10]}
                    *(result - 8) = fconvert.s(unimplemented  {fstp dword [eax-0x8], st0})
                    unimplemented  {fstp dword [eax-0x8], st0}
                while (i_1 != 1)
            
            if (ebx_6 s< arg3)
                result = &arg4[ebx_6]
                int32_t i_4 = arg3 - ebx_6
                int32_t i_2
                
                do
                    unimplemented  {fld st0, dword [eax+ecx]}
                    result += 4
                    i_2 = i_4
                    i_4 -= 1
                    *(result - 4) = fconvert.s(unimplemented  {fstp dword [eax-0x4], st0})
                    unimplemented  {fstp dword [eax-0x4], st0}
                while (i_2 != 1)
    
    return result
}
