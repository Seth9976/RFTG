// 函数名称: sub_5b4e5c
// 虚拟地址: 0x5b4e5c
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5b4e5c(int80_t arg1 @ st0, char arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    ecx.b = arg2
    int16_t top
    bool c1
    
    if ((ecx.b & 1) != 0)
        data_8b9100
        arg2.d = int.d(arg1)
        top = 1
        c1 = unimplemented  {fistp dword [ebp+0x8], st0}
    
    if ((ecx.b & 8) != 0)
        int32_t eax
        bool c0
        bool c2
        bool c3
        eax.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
            | (top & 7) << 0xb
        unimplemented  {fld st0, tword [0x8b9100]}
        int64_t temp1_1 = unimplemented  {fstp qword [ebp-0x8], st0}
        unimplemented  {fstp qword [ebp-0x8], st0}
        var_c.q = fconvert.d(temp1_1)
        bool c1_1 = unimplemented  {fstp qword [ebp-0x8], st0}
        eax.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
            | (top & 7) << 0xb
    
    if ((ecx.b & 0x10) != 0)
        unimplemented  {fld st0, tword [0x8b910c]}
        var_c.q = fconvert.d(unimplemented  {fstp qword [ebp-0x8], st0})
        unimplemented  {fstp qword [ebp-0x8], st0}
    
    if ((ecx.b & 4) != 0)
        unimplemented  {fldz }
        unimplemented  {fld1 }
        unimplemented  {fdivrp st1, st0}
        unimplemented  {fdivrp st1, st0}
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
    
    if ((ecx.b & 0x20) == 0)
        return 
    
    unimplemented  {fldpi }
    var_c.q = fconvert.d(unimplemented  {fstp qword [ebp-0x8], st0})
    unimplemented  {fstp qword [ebp-0x8], st0}
}
