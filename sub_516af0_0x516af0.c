// 函数名称: sub_516af0
// 虚拟地址: 0x516af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_516af0(void* arg1 @ esi, int32_t arg2 @ edi, int128_t* arg3)
{
    // 第一条实际指令: char const* const var_18
    char const* const var_18
    int32_t var_c
    
    if (arg2 s>= 0x20)
        char const* const var_8 = "AnimSetApplyMask"
        var_c = 0x3cd
        char const* const var_10 = "Animation.cpp"
        char* const var_14 = &data_83f3d3
        var_18 = "maskCount < MAX_MASKBONES"
    else if (arg2 s> 0)
        int128_t* result = sub_5ab990(arg1 + 0x2c, arg3, arg2 << 2)
        *(arg1 + 0xac) = arg2
        int32_t entry_ebx
        *(arg1 + 0xb0) = entry_ebx
        
        if (entry_ebx != 1)
            if (*(arg1 + 0x20) != 4)
                return result
            
            char const* const var_8_4 = "AnimSetApplyMask"
            var_c = 0x3d8
            char const* const var_10_4 = "Animation.cpp"
            char* const var_14_3 = &data_83f3d3
            var_18 = "pAnimSet->blendType != ANIM_BLEND_MASKED_OVERLAY"
        else
            if (*(arg1 + 0x20) == 4)
                return result
            
            char const* const var_8_3 = "AnimSetApplyMask"
            var_c = 0x3d4
            char const* const var_10_3 = "Animation.cpp"
            char* const var_14_2 = &data_83f3d3
            var_18 = "pAnimSet->blendType == ANIM_BLEND_MASKED_OVERLAY"
    else
        char const* const var_8_1 = "AnimSetApplyMask"
        var_c = 0x3ce
        char const* const var_10_1 = "Animation.cpp"
        char* const var_14_1 = &data_83f3d3
        var_18 = "maskCount > 0 || maskType == ANIMMASK_NONE"
    
    sub_4c5870(var_18, &data_83f3d3, "Animation.cpp", var_c, "AnimSetApplyMask")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
