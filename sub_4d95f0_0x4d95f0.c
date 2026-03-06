// 函数名称: sub_4d95f0
// 虚拟地址: 0x4d95f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4d95f0(int32_t* arg1)
{
    // 第一条实际指令: void* ecx = data_27e7fe0
    void* ecx = data_27e7fe0
    *(ecx + 0x28) = *arg1
    *(ecx + 0x2c) = arg1[1]
    *(ecx + 0x30) = arg1[2]
    *(ecx + 0x34) = arg1[3]
    int32_t result = arg1[4]
    *(ecx + 0x38) = result
    return result
}
