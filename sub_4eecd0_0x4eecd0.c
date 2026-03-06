// 函数名称: sub_4eecd0
// 虚拟地址: 0x4eecd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4eecd0(float* arg1)
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_2 = *(eax + 0x30)
    long double x87_r7 = float.t(0)
    *(eax_2 + 0x24) += 1
    long double temp0 = fconvert.t(arg1[0xbe])
    x87_r7 - temp0
    eax_2.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        void* eax_3
        eax_3.b = 1
        arg1[0xbe] = fconvert.s(fconvert.t(arg1[0xbe]) - fconvert.t(*(arg1[0xb9] i+ 0x58)))
        return eax_3
    
    int32_t eax_5 = sub_466320(*arg1[0xb9])
    int32_t* esi_2 = arg1[0xb7] i* 0x134 + *eax_5
    int32_t eax_6 = sub_4ee680(arg1, esi_2)
    
    if (eax_6.b != 0)
        return sub_4ecce0(eax_6, arg1, arg1, esi_2) != 0
    
    return eax_6
}
