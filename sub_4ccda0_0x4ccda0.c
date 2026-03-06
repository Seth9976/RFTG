// 函数名称: sub_4ccda0
// 虚拟地址: 0x4ccda0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ccda0(char* arg1 @ esi, char* arg2 @ edi)
{
    // 第一条实际指令: int32_t result_1
    int32_t result_1
    int32_t result = result_1
    result.b = ((zx.d(*arg2) * zx.d(*arg1) + 0x80) s/ 0xff).b
    result:1.b = ((zx.d(arg2[1]) * zx.d(arg1[1]) + 0x80) s/ 0xff).b
    result:2.b = ((zx.d(arg2[2]) * zx.d(arg1[2]) + 0x80) s/ 0xff).b
    result:3.b = ((zx.d(arg2[3]) * zx.d(arg1[3]) + 0x80) s/ 0xff).b
    return result
}
