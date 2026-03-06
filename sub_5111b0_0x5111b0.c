// 函数名称: sub_5111b0
// 虚拟地址: 0x5111b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_5111b0(int32_t arg1, int32_t arg2, int32_t* arg3, char** arg4 @ esi, void* arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t eax = *arg3
    int32_t var_8_1 = 0
    
    if (eax == 1)
        int32_t edx = *(arg5 + 0x18)
        
        if (*(edx + (arg3[2] << 2)) == 0)
            sub_4c4330("Spherize", edx, arg4)
            return arg4
        
        sub_4c5870("Halt", &data_83f3d3, "MaterialFnDef.cpp", 0x154, "MaterialFnEntry_Text")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (eax != 2)
        sub_4c5870("Halt", &data_83f3d3, "MaterialFnDef.cpp", 0x157, "MaterialFnEntry_Text")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = arg3[3]
    
    if (ecx == 4)
        sub_4c4330("Translate", arg2, arg4)
        return arg4
    
    if (ecx == 5)
        sub_4c4330("Rotate", arg2, arg4)
        return arg4
    
    sub_4c5870("Halt", &data_83f3d3, "MaterialFnDef.cpp", 0x14c, "MaterialFnEntry_Text")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
