// 函数名称: sub_663230
// 虚拟地址: 0x663230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_663230(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax = sub_6664e0(arg1, 0x100)
    int32_t eax = sub_6664e0(arg1, 0x100)
    *arg2 = eax
    
    if (arg3 - 0x17318 u<= 0x2710)
        char* i
        
        for (i = nullptr; i u< 0x100; i = &i[1])
            i[eax] = i.b
        
        return i
    
    int32_t* i_1 = nullptr
    void* ecx_2 = 0xffffffff - eax
    void* eax_1
    
    do
        void* esi_1 = i_1 + eax
        
        if (ecx_2 + esi_1 u> 0xfd)
            eax_1.b = i_1.b
        else
            arg2 = i_1
            unimplemented  {fild st0, dword [ebp+0x8]}
            
            if (i_1 s< 0)
                unimplemented  {fadd qword [0x8a5650]}
            
            unimplemented  {fdiv st0, qword [0x8a53f0]}
            unimplemented  {fild st0, dword [ebp+0xc]}
            unimplemented  {fmul st0, qword [0x82e388]}
            int32_t mxcsr
            int16_t x87control
            int16_t x87control_1 = sub_686c10(mxcsr, x87control)
            unimplemented  {fmul st0, qword [0x8a53f0]}
            unimplemented  {fadd qword [0x8a5368]}
            double var_20_1 = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            int16_t x87control_2 = sub_686950(mxcsr, x87control_1, var_20_1)
            unimplemented  {call 0x686950}
            ecx_2 = 0xffffffff - eax
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(x87control_2)
            arg2:2.w = temp0_1
            int16_t x87control_3
            int16_t x87status_2
            x87control_3, x87status_2 = __fldcw_memmem16((zx.d(arg2:2.w) | 0xc00).w)
            char var_8_2 = (int.d(unimplemented  {fistp dword [ebp-0x4], st0})).b
            unimplemented  {fistp dword [ebp-0x4], st0}
            int16_t top = top + 1
            eax_1.b = var_8_2
            int16_t x87status_3
            x87control, x87status_3 = __fldcw_memmem16(arg2:2.w)
        
        i_1 += 1
        *esi_1 = eax_1.b
    while (i_1 u< 0x100)
    
    return eax_1
}
