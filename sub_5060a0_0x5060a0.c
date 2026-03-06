// 函数名称: sub_5060a0
// 虚拟地址: 0x5060a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5060a0(int32_t arg1 @ esi, int32_t* arg2 @ edi)
{
    // 第一条实际指令: if (arg1 s> 0)
    if (arg1 s> 0)
        char* eax_1 = *arg2
        int32_t eax_2
        
        if (eax_1 == 0 || *eax_1 == 0)
            eax_2 = 0
        else
            eax_2 = *(sub_4c4060(arg2) + 8)
        
        if (arg1 s<= eax_2)
            int32_t i
            
            for (i = arg1 - 1; i s> 0; i -= 1)
                char* eax_6
                eax_6.b = sub_4c4410(arg2)[i]
                
                if (eax_6.b u< 0x80)
                    break
                
                if ((eax_6.b & 0xe0) == 0xc0)
                    break
                
                if ((eax_6.b & 0xf0) == 0xe0)
                    break
                
                eax_6.b &= 0xf8
                
                if (eax_6.b == 0xf0)
                    break
            
            return i
    
    sub_4c5870("index > 0 && index <= mText.Length()", &data_83f3d3, "UITextBox.cpp", 0xa4, 
        "UITextBox::Utf8StringLeftOneIndex")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
