// 函数名称: sub_5cfac0
// 虚拟地址: 0x5cfac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5cfac0(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = data_bedd44
    int32_t edx = data_bedd44
    
    if (edx == 0)
        return 
    
    void* eax_1 = arg1[0xa]
    
    if (edx(zx.d(*(eax_1 + 0xc50)), eax_1 + zx.d(*(eax_1 + 0xc51)) * 0x14 + 0xc54) == 0x48f)
        *(arg1[0xa] + 0xc4d) = 1
        *(arg1[0xa] + 0xc4c) = 1
        return 
    
    void* eax = arg1[0xa]
    
    if (*(eax + zx.d(*(eax + 0xc51)) * 0x14 + 0xc54) == 0)
        return 
    
    uint32_t edx_2 = zx.d(*(eax + 0xc51))
    
    if (*(eax + edx_2 * 0x14 + 0xc54) == *(eax + (edx_2 ^ 1) * 0x14 + 0xc54))
        return 
    
    uint32_t eax_6 = zx.d(*(eax + 0xc51))
    int32_t eax_7 = eax_6 ^ 1
    sub_5c6c50(arg1, 0, *(eax + eax_6 * 0x14 + 0xc5c))
    int16_t eax_9 = *(eax + eax_6 * 0x14 + 0xc5e)
    int32_t eax_10
    
    if (0x8001 s<= eax_9)
        eax_10 = sx.d(eax_9)
    else
        eax_10 = 0xffff8001
    
    sub_5c6c50(arg1, 1, (neg.d(eax_10)).w)
    sub_5c6c50(arg1, 2, *(eax + eax_6 * 0x14 + 0xc60))
    int16_t eax_13 = *(eax + eax_6 * 0x14 + 0xc62)
    int32_t eax_14
    
    if (0x8001 s<= eax_13)
        eax_14 = sx.d(eax_13)
    else
        eax_14 = 0xffff8001
    
    sub_5c6c50(arg1, 3, (neg.d(eax_14)).w)
    sub_5c6c50(arg1, 4, (zx.d(*(eax + eax_6 * 0x14 + 0xc5a)) * 0xffff s/ 0xff).w - 0x8000)
    sub_5c6c50(arg1, 5, (zx.d(*(eax + eax_6 * 0x14 + 0xc5b)) * 0xffff s/ 0xff).w - 0x8000)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 1) != 0)
        sub_5c6d80(arg1, 0, *(eax + eax_6 * 0x14 + 0xc58) & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 2) != 0)
        sub_5c6d80(arg1, 1, (*(eax + eax_6 * 0x14 + 0xc58)).b u>> 1 & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 4) != 0)
        sub_5c6d80(arg1, 2, (*(eax + eax_6 * 0x14 + 0xc58)).b u>> 2 & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 8) != 0)
        sub_5c6d80(arg1, 3, (*(eax + eax_6 * 0x14 + 0xc58)).b u>> 3 & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x10) != 0)
        sub_5c6d80(arg1, 4, (*(eax + eax_6 * 0x14 + 0xc58)).b u>> 4 & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x20) != 0)
        sub_5c6d80(arg1, 5, (*(eax + eax_6 * 0x14 + 0xc58)).b u>> 5 & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x40) != 0)
        sub_5c6d80(arg1, 6, (*(eax + eax_6 * 0x14 + 0xc58)).b u>> 6 & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x80) != 0)
        sub_5c6d80(arg1, 7, (*(eax + eax_6 * 0x14 + 0xc58)).b u>> 7 & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x100)
            != 0)
        sub_5c6d80(arg1, 8, (zx.d(*(eax + eax_6 * 0x14 + 0xc58)) u>> 8).b & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x200)
            != 0)
        sub_5c6d80(arg1, 9, (zx.d(*(eax + eax_6 * 0x14 + 0xc58)) u>> 9).b & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x1000)
            != 0)
        sub_5c6d80(arg1, 0xa, (zx.d(*(eax + eax_6 * 0x14 + 0xc58)) u>> 0xc).b & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x2000)
            != 0)
        sub_5c6d80(arg1, 0xb, (zx.d(*(eax + eax_6 * 0x14 + 0xc58)) u>> 0xd).b & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x4000)
            != 0)
        sub_5c6d80(arg1, 0xc, (zx.d(*(eax + eax_6 * 0x14 + 0xc58)) u>> 0xe).b & 1)
    
    if (sub_5cfaa0(zx.d(*(eax + eax_6 * 0x14 + 0xc58)), zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x8000)
            != 0)
        sub_5c6d80(arg1, 0xd, (zx.d(*(eax + eax_6 * 0x14 + 0xc58)) u>> 0xf).b & 1)
    
    uint32_t edi_2 = zx.d(*(eax + eax_6 * 0x14 + 0xc58))
    
    if (sub_5cfaa0(edi_2, zx.d(*(eax + eax_7 * 0x14 + 0xc58)), 0x400) != 0)
        sub_5c6d80(arg1, 0xe, (edi_2 u>> 0xa).b & 1)
    
    void* esi_2 = arg1[0xa]
    *(esi_2 + 0xc51) ^= 1
}
