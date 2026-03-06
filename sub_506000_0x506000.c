// 函数名称: sub_506000
// 虚拟地址: 0x506000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_506000(int32_t* arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: if (arg2 s>= 0)
    if (arg2 s>= 0)
        char* eax_1 = *arg1
        int32_t eax_2
        
        if (eax_1 == 0 || *eax_1 == 0)
            eax_2 = 0
        else
            eax_2 = *(sub_4c4060(arg1) + 8)
        
        if (arg2 s< eax_2)
            char* const eax_5 = *arg1
            
            if (eax_5 == 0)
                eax_5 = &data_83f3d3
            
            uint32_t eax_6 = sub_4ba3e0(&eax_5[arg2])
            
            if (eax_6 s< 0x80)
                return 1 + arg2
            
            if (eax_6 s< 0x800)
                return 2 + arg2
            
            int32_t ecx_1
            ecx_1.b = eax_6 s>= 0x10000
            return ecx_1 + 3 + arg2
    
    sub_4c5870("index >= 0 && index < mText.Length()", &data_83f3d3, "UITextBox.cpp", 0x9d, 
        "UITextBox::Utf8StringRightOneIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
