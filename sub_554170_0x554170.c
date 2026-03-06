// 函数名称: sub_554170
// 虚拟地址: 0x554170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_554170(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    
    if (arg1 s< 0xd || (arg1 s> 0x12 && arg1 != 0x15))
        return sub_5540b0(arg1, arg3) * entry_ebx
    
    int32_t edi
    
    if (arg1 - 0xd u<= 8)
        switch (arg1)
            case 0xd, 0xe
                edi = 8
            label_5541b6:
                int32_t eax_3
                int32_t edx
                edx:eax_3 = sx.q(arg3 + 3)
                int32_t eax_5
                int32_t edx_2
                edx_2:eax_5 = sx.q(entry_ebx + 3)
                int32_t edx_4
                edx_4.b = arg1 != 0x15
                return ((eax_5 + (edx_2 & 3)) s>> 2) * (((edx & 3) + eax_3) s>> 2) * edi
                    + ((edx_4 - 1) & 0x10)
            case 0xf, 0x10, 0x11, 0x12, 0x15
                edi = 0x10
                goto label_5541b6
    sub_4c5870("Halt", &data_83f3d3, "ImageUtils.cpp", 0x9c, "TextureFormatCompressedBytesPerBlock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
