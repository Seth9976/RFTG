// 函数名称: sub_4ccf50
// 虚拟地址: 0x4ccf50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ccf50()
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    
    if (entry_ebx == 0)
        return 0
    
    int32_t i = 0
    
    if (data_27e7fc8 s> 0)
        void* edi_1 = &data_27e7bc8
        
        do
            if (sub_5a9697(**edi_1, entry_ebx) == 0)
                return *edi_1
            
            i += 1
            edi_1 += 4
        while (i s< data_27e7fc8)
    
    sub_4c5870("Halt", &data_83f3d3, "DefTypeRegistry.cpp", 0x43, "DefMapFromTypeString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
