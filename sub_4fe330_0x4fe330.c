// 函数名称: sub_4fe330
// 虚拟地址: 0x4fe330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4fe330(void* arg1, int32_t arg2, void* arg3, char* arg4 @ esi)
{
    // 第一条实际指令: void* var_4 = arg3
    void* var_4 = arg3
    int32_t eax_1 = *(arg1 + 0x10) - 1
    
    if (eax_1 u<= 0xf)
        uint32_t edx = zx.d(lookup_table_4fe414[eax_1])
        
        switch (edx)
            case 0
                int32_t eax_2 = *(arg3 + 0x24)
                *arg4 = eax_2
                return eax_2
            case 1
                arg3.w = *(arg3 + 0x24)
                *arg4 = arg3.w
                return eax_1
            case 2
                eax_1.b = *(arg3 + 0x24)
                *arg4 = eax_1.b
                return eax_1
            case 3
                arg3.b = *(arg3 + 0x24) != 0
                *arg4 = arg3.b
                return eax_1
            case 4
                *arg4 = *(arg3 + 0x24)
                *(arg4 + 4) = 0
                return eax_1
            case 5
                int32_t eax_5 = sub_4fe300(*(arg3 + 0x20), edx, *(arg3 + 0x24))
                *arg4 = eax_5
                return eax_5
            case 6
                *arg4 = fconvert.d(float.t(0))
                sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x8f, 
                    "DefinitionFillShallowFieldWithDefaults")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    
    sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0xaf, "DefinitionFillShallowFieldWithDefaults")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
