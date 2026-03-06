// 函数名称: sub_4f66d0
// 虚拟地址: 0x4f66d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4f66d0(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t* arg4, float arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t var_9c = eax
    int32_t ecx
    int32_t var_a0 = ecx
    void var_48
    int32_t edx
    __builtin_memcpy(&var_48, sub_4f62d0(arg3, fconvert.s(fconvert.t(arg5)), edx), 0x40)
    void* ecx_4 = arg3 * 0x118 + *sub_4f4890(arg2)
    
    if (*(ecx_4 + 4) == 2)
        void var_88
        int32_t eax_6
        int80_t result
        result, eax_6 = sub_4f56d0(&var_88, ecx_4, &data_be1ae0, &var_48, arg4, arg6, arg7)
        __builtin_memcpy(arg1, eax_6, 0x40)
        return result
    
    sub_4c5870("el.type == UI_TABLE", &data_83f3d3, "UIDef.cpp", 0x403, "UIElementTableTransform")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
