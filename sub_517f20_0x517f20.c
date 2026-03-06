// 函数名称: sub_517f20
// 虚拟地址: 0x517f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_517f20(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x2c)
    void* edx = *(arg1 + 0x2c)
    
    if (*(edx + 0x310) s>= 2)
        sub_4c5870("structure->pStructAnim->numIkGroups<2", &data_83f3d3, "Animation.cpp", 0x626, 
            "IKGroupAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t result = *(edx + 0x310)
    *(edx + 0x310) = result + 1
    char** eax_1 = *(arg1 + 4)
    char* edi_1 = result * 0x130 + *(arg1 + 0x2c) + 0xb0
    
    if (eax_1 == 0)
        eax_1 = sub_50a390(2)
    else if (eax_1[1] != 2)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (*eax_1 == 0)
        sub_5094d0(eax_1, 0, 1)
    
    eax_1[7] = &eax_1[7][1]
    int32_t* ecx = **eax_1
    *(edi_1 + 0x104) = 3
    int32_t i = 0
    void* edi_2 = &edi_1[4]
    
    do
        char* eax_3 = *(arg2 + (i << 2))
        *edi_2 = sub_4d5560(eax_3, arg2, *ecx, eax_3)
        i += 1
        edi_2 += 4
    while (i s< 3)
    
    *edi_1 = 0
    eax_1[7] -= 1
    return result
}
