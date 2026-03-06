// 函数名称: sub_4e4fe0
// 虚拟地址: 0x4e4fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4e4fe0()
{
    // 第一条实际指令: uint32_t result = sub_4e4190()
    uint32_t result = sub_4e4190()
    int32_t edi = data_3160070
    int32_t ecx = data_3160074
    int32_t edx_1 = edi - ecx
    *((edi << 2) + &data_3160ef0) = result
    
    if (ecx s> edi)
        edx_1 -= 0xffffff80
    
    int32_t var_8 = edx_1
    
    if (*((ecx << 2) + &data_3160ef0) s< result - 0xc8)
        do
            ecx = (ecx + 1) & 0x8000007f
            
            if (ecx s< 0)
                ecx = ((ecx - 1) | 0xffffff80) + 1
            
            edx_1 -= 1
            
            if (edx_1 s<= 2)
                break
        while (*((ecx << 2) + &data_3160ef0) s< result - 0xc8)
        
        data_3160074 = ecx
        var_8 = edx_1
    
    void* esi_1 = data_27e7fcc
    
    if (esi_1 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    long double x87_r7
    
    if (edx_1 != 0)
        result -= *((ecx << 2) + &data_3160ef0)
        x87_r7 = float.t(var_8) / float.t(result) * fconvert.t(1000.0)
    else
        x87_r7 = float.t(0)
    
    *(esi_1 + 0x54) = fconvert.s(x87_r7)
    int32_t edi_2 = (edi + 1) & 0x8000007f
    
    if (edi_2 s< 0)
        edi_2 = ((edi_2 - 1) | 0xffffff80) + 1
    
    data_3160070 = edi_2
    return result
}
