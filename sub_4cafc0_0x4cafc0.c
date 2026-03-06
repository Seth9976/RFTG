// 函数名称: sub_4cafc0
// 虚拟地址: 0x4cafc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4cafc0(char** arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: char** esi = arg1
    char** esi = arg1
    
    if (arg2 s< 0)
        sub_4c5870("unicode >= 0", &data_83f3d3, "Font.cpp", 0x1e3, "FontHasCharacter")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (esi == 0)
        esi = sub_50a390(esi + 0x12)
    else if (esi[1] != 0x12)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_2 = *esi
    int32_t ecx_3 = &esi[7][1]
    esi[7] = ecx_3
    int32_t* i = *eax_2
    
    if (arg2 s>= 0x80)
        for (i = *(i[9] + (((arg2 s>> 4 | arg2) & i[0xa]) << 2)); i != 0; i = i[2])
            if (arg2 == *i)
                if (i == 0xfffffffc)
                    break
                
                esi[7] = ecx_3 - 1
                i.b = 1
                return i
        
        esi[7] = ecx_3 - 1
    else
        bool cond:0_1 = i[arg2 + 0xc] == 0xffffffff
        esi[7] = ecx_3 - 1
        
        if (not(cond:0_1))
            i.b = 1
            return i
    
    i.b = 0
    return i
}
