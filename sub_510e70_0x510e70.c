// 函数名称: sub_510e70
// 虚拟地址: 0x510e70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_510e70(int32_t* arg1, char** arg2 @ esi)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    int32_t var_8 = 0
    
    if (eax u> 3)
        sub_4c5870("Halt", &data_83f3d3, "MaterialFnDef.cpp", 0xc1, "MaterialFnItem_Name")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t edx
    
    switch (eax)
        case 0
            sub_4c4330("Texture", edx, arg2)
            return arg2
        case 1
            sub_4c4330("Color", edx, arg2)
            return arg2
        case 2
            sub_4c4330("Group", edx, arg2)
            return arg2
        case 3
            if (arg1[5] == 0)
                sub_4c4330("Circle", edx, arg2)
                return arg2
            
            sub_4c5870("Halt", &data_83f3d3, "MaterialFnDef.cpp", 0xbe, "MaterialFnItem_Name")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
}
