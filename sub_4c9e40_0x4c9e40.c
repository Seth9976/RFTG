// 函数名称: sub_4c9e40
// 虚拟地址: 0x4c9e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4c9e40()
{
    // 第一条实际指令: void* result = data_27e7bbc
    void* result = data_27e7bbc
    
    if (*(result + 0x1c) != 0)
        *(result + 0x1c) = 0
        
        if (*(result + 0x2c) != 0)
            sub_4d32e0()
            result = data_27e7bbc
        
        if (*(result + 0x28) == 0)
            *(result + 0x20)
            sub_4d31e0()
            void* eax = data_27e7bbc
            int32_t* ecx = data_27e7fd0
            *(eax + 0x2c) = 1
            return (*(*ecx + 0x38))(*(eax + 0x24))
        
        *(result + 0x2c) = 0
    
    return result
}
