// 函数名称: sub_4e3770
// 虚拟地址: 0x4e3770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e3770(float* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    
    if (sub_5a9d70((fconvert.d(fconvert.t(*arg1))).w) != 0
            && sub_5a9d70((fconvert.d(fconvert.t(arg1[1]))).w) != 0
            && sub_5a9d70((fconvert.d(fconvert.t(arg1[2]))).w) != 0
            && sub_5a9d70((fconvert.d(fconvert.t(arg1[3]))).w) != 0)
        long double st0_1
        st0_1, eax = sub_465e80(arg1)
        long double x87_r7_5 = fconvert.t(fconvert.s(st0_1))
        long double temp0_1 = fconvert.t(0.89999997615814209)
        x87_r7_5 - temp0_1
        eax.w = (x87_r7_5 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp0_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            long double temp1_1 = fconvert.t(1.10000002f)
            x87_r7_5 - temp1_1
            eax.w = (x87_r7_5 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe
            
            if ((eax:1.b & 0x41) != 0)
                eax.b = 1
                return 
    
    eax.b = 0
}
