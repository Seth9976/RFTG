// 函数名称: sub_51e9b0
// 虚拟地址: 0x51e9b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_51e9b0(int32_t* arg1)
{
    // 第一条实际指令: void* result = *arg1
    void* result = *arg1
    
    if (result == 0)
        return result
    
    int32_t ecx_1 = *(result + 0x1c)
    
    if (ecx_1 != 0)
        if (ecx_1 == *(result + 0x20))
            sub_4c5870("node->children[0] != node->children[1]", &data_83f3d3, "RTree.cpp", 0x8e, 
                "NodeDeleteRecursive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        for (int32_t i = 0x1c; i s< 0x24; i += 4)
            sub_51e9b0(*arg1 + i)
    
    return sub_51e950(arg1)
}
