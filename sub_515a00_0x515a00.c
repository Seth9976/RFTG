// 函数名称: sub_515a00
// 虚拟地址: 0x515a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_515a00(void* arg1 @ edi, int32_t** arg2)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0xc)
    int32_t* eax = *(arg1 + 0xc)
    
    if (eax == 0)
        sub_4c5870("pAnimSet->assetAnimOrStructure", &data_83f3d3, "Animation.cpp", 0x151, 
            "AnimSetGetClip")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = eax[1]
    
    if (ecx == 0xa)
        char* eax_2 = sub_5171a0(eax)
        
        if (*(eax_2 + 0xc) != 0)
            if (*(arg1 + 0x10) == 0)
                int32_t* eax_7
                void* edx
                eax_7, edx = sub_4d5460(*arg2)
                int32_t var_c = *eax_7
                sub_515740(eax_2, edx)
                return &eax_2[4]
            
            sub_4c5870("pAnimSet->clipIndex == 0", &data_83f3d3, "Animation.cpp", 0x158, 
                "AnimSetGetClip")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4c5870("pDefAnimation->animClip.pAnimImportData", &data_83f3d3, "Animation.cpp", 0x157, 
            "AnimSetGetClip")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (ecx != 2)
        sub_4c5870("Halt", &data_83f3d3, "Animation.cpp", 0x16a, "AnimSetGetClip")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t* eax_10 = sub_4d5460(eax)
    int32_t ecx_2 = *(arg1 + 0x10)
    
    if (ecx_2 s>= 0)
        void* eax_11 = *eax_10
        
        if (ecx_2 s< *(eax_11 + 0x40))
            return *(eax_11 + 0x44) + ecx_2 * 0xc
    
    sub_4c5870(
        "pAnimSet->clipIndex >= 0 && pAnimSet->clipIndex < pAnimStructure->pStructureImportData->numAnimClips", 
        &data_83f3d3, "Animation.cpp", 0x165, "AnimSetGetClip")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
