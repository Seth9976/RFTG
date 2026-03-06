// 函数名称: sub_562d00
// 虚拟地址: 0x562d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_562d00(int32_t* arg1, int32_t* arg2, char** arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_78 = ebx
    int32_t esi
    int32_t var_7c = esi
    int32_t edi
    int32_t var_80 = edi
    arg1[0x18] = arg2
    arg1[0x19] = arg3
    void* eax_1
    int16_t x87control
    eax_1, x87control = sub_50ba10(arg2)
    void* edx = data_3079204
    void* edi_1
    
    if (eax_1 != 0)
        uint32_t ecx = zx.d(eax_1.w)
        
        if (ecx u< *(edx + 0x44))
            void* ecx_2 = ecx * 0x24c + *(edx + 0x40)
            int32_t edx_1
            edx_1.b = *(ecx_2 + 0x248) != eax_1
            edi_1 = (edx_1 - 1) & ecx_2
        else
            edi_1 = nullptr
    else
        edi_1 = nullptr
    
    int32_t ecx_3 = 0
    
    if (arg3 == 0)
        arg1[0xa].b = 0
    else
        void* eax_2
        eax_2, x87control = sub_50ba10(arg3)
        void* edx_2 = data_3079204
        
        if (eax_2 != 0)
            uint32_t ecx_4 = zx.d(eax_2.w)
            
            if (ecx_4 u< *(edx_2 + 0x44))
                void* ecx_6 = ecx_4 * 0x24c + *(edx_2 + 0x40)
                int32_t edx_3
                edx_3.b = *(ecx_6 + 0x248) != eax_2
                ecx_3 = *(((edx_3 - 1) & ecx_6) + 0x24)
                arg1[0xa].b = 1
            else
                ecx_3 = *0x24
                arg1[0xa].b = 1
        else
            ecx_3 = *(eax_2 + 0x24)
            arg1[0xa].b = 1
    
    int32_t* eax_5 = arg1[4]
    (*(*eax_5 + 0x84))(eax_5, 1, edi_1 + 0x30, ecx_3)
    int32_t* eax_8 = *sub_466320(arg2)
    long double x87_r7 = float.t(*eax_8)
    
    if (*eax_8 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    int32_t ecx_8 = eax_8[1]
    long double x87_r7_1 = float.t(eax_8[1])
    
    if (ecx_8 s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    int32_t var_98 = ecx_8
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_8[2])))
    arg1[8] = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))
    arg1[9] = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1)))
    var_98.q = fconvert.d(fconvert.t(fconvert.s(fconvert.t(arg1[8]) + fconvert.t(0.5))))
    int32_t mxcsr
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686950(mxcsr, x87control, var_98)
    int32_t eax_10 = sub_685f40(fconvert.t(fconvert.s(st0)))
    var_98.q = fconvert.d(fconvert.t(fconvert.s(fconvert.t(arg1[9]) + fconvert.t(0.5))))
    int32_t var_98_1 = eax_10
    int32_t var_94_1 = sub_685f40(fconvert.t(fconvert.s(sub_686950(mxcsr, x87control_1, var_98))))
    int32_t var_5c_2 = 0
    return (*(*arg1 + 0x58))(0)
}
