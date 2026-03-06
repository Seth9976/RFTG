// 函数名称: sub_5540b0
// 虚拟地址: 0x5540b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5540b0(int32_t arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: if (arg1 s< 0xd || (arg1 s> 0x12 && arg1 != 0x15))
    if (arg1 s< 0xd || (arg1 s> 0x12 && arg1 != 0x15))
        if (sub_553f70(arg1) * arg2 s>= 4)
            return sub_553f70(arg1) * arg2
        
        return 4
    
    sub_4c5870("!TextureFormatIsCompressed(format)", &data_83f3d3, "ImageUtils.cpp", 0x82, 
        "TextureFormatPitch")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
