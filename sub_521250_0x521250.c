// 函数名称: sub_521250
// 虚拟地址: 0x521250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_521250(int32_t* arg1, int32_t* arg2 @ esi, void** arg3 @ edi, void* arg4, void** arg5)
{
    // 第一条实际指令: void* eax = *arg1
    void* eax = *arg1
    char const* const var_18
    int32_t var_c
    
    if (eax != 0)
        void* eax_2 = sub_5211a0(eax, arg4)
        *arg2 = eax_2
        
        if (eax_2 != 0)
            void* result = *(eax_2 + 0x10)
            
            if (result != 0)
                int32_t edx_2 = *(result + 0x14)
                *arg5 = result
                
                if (edx_2 != *arg2)
                    *arg3 = result + 0x18
                    return result + 0x18
                
                *arg3 = result + 0x14
                return result
            
            char const* const var_8_2 = "sFindNearestNode"
            var_c = 0x12b
            char const* const var_10_2 = "SphereTree.cpp"
            char* const var_14_2 = &data_83f3d3
            var_18 = "nodeSibling->parent != NULL"
        else
            char const* const var_8_1 = "sFindNearestNode"
            var_c = 0x12a
            char const* const var_10_1 = "SphereTree.cpp"
            char* const var_14_1 = &data_83f3d3
            var_18 = "nodeSibling != NULL"
    else
        char const* const var_8 = "sFindNearestNode"
        var_c = 0x120
        char const* const var_10 = "SphereTree.cpp"
        char* const var_14 = &data_83f3d3
        var_18 = "tree.pNodeRoot != NULL"
    
    sub_4c5870(var_18, &data_83f3d3, "SphereTree.cpp", var_c, "sFindNearestNode")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
