// 函数名称: sub_5131b0
// 虚拟地址: 0x5131b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_5131b0(void* arg1, char** arg2 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax = *(arg1 + 0x20)
    int32_t var_8_1 = 0
    
    if (eax u> 6)
        sub_4c5870("Halt", &data_83f3d3, "MaterialFnDef.cpp", 0x37e, "EmitBlendFn")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t edx
    
    switch (eax)
        case 0
            sub_4c4330("BlendAlpha", edx, arg2)
            return arg2
        case 1
            sub_4c4330("BlendMultiply", edx, arg2)
            return arg2
        case 2
            sub_4c4330("BlendAdd", edx, arg2)
            return arg2
        case 3
            sub_4c4330("BlendOverlay", edx, arg2)
            return arg2
        case 4
            sub_4c4330("BlendMask", edx, arg2)
            return arg2
        case 5
            sub_4c4330("BlendColor", edx, arg2)
            return arg2
        case 6
            sub_4c4330("BlendColorHSL", edx, arg2)
            return arg2
}
