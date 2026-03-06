// 函数名称: sub_595f00
// 虚拟地址: 0x595f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_595f00(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebx = arg4
    int32_t ebx = arg4
    int32_t i_2 = arg1 * arg3
    float* result = sub_5a881a(i_2 * ebx * 4)
    float* result_1 = result
    
    if (result == 0)
        __free_base(arg2)
        data_273ac1c = "outofmem"
        return 0
    
    if ((ebx.b & 1) == 0)
        ebx -= 1
    
    if (i_2 s> 0)
        int32_t eax_6 = arg4
        float* result_2 = result
        void* ebx_1 = nullptr
        float* result_3 = result_2
        int32_t i_1 = i_2
        int32_t i
        
        do
            void* esi_1 = nullptr
            
            if (ebx s> 0)
                float* result_4 = result_2
                
                do
                    uint32_t var_14_1 = zx.d(*(ebx_1 + esi_1 + arg2))
                    unimplemented  {fild st0, dword [esp+0x1c]}
                    unimplemented  {fdiv st0, qword [0x8a53f0]}
                    unimplemented  {fld st0, qword [0x8a5488]}
                    int32_t mxcsr
                    int16_t x87control = sub_686c10(mxcsr, x87control)
                    *result_4 = fconvert.s(unimplemented  {fstp dword [edi], st0})
                    unimplemented  {fstp dword [edi], st0}
                    int16_t top = top + 1
                    esi_1 += 1
                    result_4 = &result_4[1]
                while (esi_1 s< ebx)
                
                eax_6 = arg4
                result = result_1
            
            if (esi_1 s< eax_6)
                void* esi_2 = esi_1 + ebx_1
                uint32_t var_14_2 = zx.d(*(esi_2 + arg2))
                unimplemented  {fild st0, dword [esp+0x1c]}
                unimplemented  {fdiv st0, qword [0x8a53f0]}
                result[esi_2] = fconvert.s(unimplemented  {fstp dword [edi+esi*4], st0})
                unimplemented  {fstp dword [edi+esi*4], st0}
            
            result_2 = &result_3[eax_6]
            ebx_1 += eax_6
            i = i_1
            i_1 -= 1
            result_3 = result_2
        while (i != 1)
    
    __free_base(arg2)
    return result
}
