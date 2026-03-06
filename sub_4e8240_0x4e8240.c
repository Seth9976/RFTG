// 函数名称: sub_4e8240
// 虚拟地址: 0x4e8240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_4e8240(char* arg1, char* arg2)
{
    // 第一条实际指令: char* result = arg1
    char* result = arg1
    uint32_t eax_1 = zx.d(*arg2) + zx.d(*arg1)
    result.b = eax_1.b
    
    if (eax_1 s>= 0xff)
        result.b = 0xff
    
    uint32_t eax_3 = zx.d(arg2[1]) + zx.d(arg1[1])
    result:1.b = eax_3.b
    
    if (eax_3 s>= 0xff)
        result:1.b = 0xff
    
    uint32_t eax_5 = zx.d(arg2[2]) + zx.d(arg1[2])
    result:2.b = eax_5.b
    
    if (eax_5 s>= 0xff)
        result:2.b = 0xff
    
    uint32_t eax_7 = zx.d(arg2[3]) + zx.d(arg1[3])
    result:3.b = eax_7.b
    
    if (eax_7 s>= 0xff)
        result:3.b = 0xff
    
    return result
}
