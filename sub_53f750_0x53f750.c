// 函数名称: sub_53f750
// 虚拟地址: 0x53f750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_53f750(char* arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: void* const esi = &data_840818
    void* const esi = &data_840818
    
    do
        uint32_t result = sub_5a9697(*(esi + 4), arg1)
        
        if (result == 0)
            *arg2 = *esi
            return result
        
        esi += 8
    while (*(esi + 4) != 0)
    
    sub_4c5870("newVal", &data_83f3d3, "Windows\EditorWindow.cpp", 0xf74, "DefSetImageAlign")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
