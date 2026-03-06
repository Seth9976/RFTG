// 函数名称: sub_5dc5a0
// 虚拟地址: 0x5dc5a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dc5a0(char* arg1)
{
    // 第一条实际指令: int16_t buffer[0x400]
    int16_t buffer[0x400]
    FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM, nullptr, GetLastError(), 0, &buffer, 0x400, nullptr)
    int32_t var_810 = sub_5cd1d0(&buffer) * 2 + 2
    int16_t (* var_814_1)[0x400] = &buffer
    int32_t eax_2 = sub_5dd160("UTF-8", "UTF-16LE")
    char* const eax_3 = arg1
    void* const ecx
    
    if (eax_3 == 0)
        ecx = &data_83f3d3
        eax_3 = &data_83f3d3
    else
        ecx = &data_6b0310
    
    int32_t var_80c_1 = eax_2
    void* const var_810_1 = ecx
    char* const var_814_2 = eax_3
    sub_5cce60("%s%s%s")
    int32_t var_81c_1 = eax_2
    sub_5d0af0()
    return 0xffffffff
}
