// 函数名称: sub_56f310
// 虚拟地址: 0x56f310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_56f310(int32_t* arg1)
{
    // 第一条实际指令: sub_56f1e0()
    sub_56f1e0()
    DragAcceptFiles(data_30785e0, 1)
    data_26a6760 = arg1
    data_26a7764 = 0
    data_2727b70 = *(sub_50c140(arg1) + 4)
    __builtin_memcpy(0x2727b84, &data_be4c5c, 0x20)
    data_2727b7c = fconvert.s(fconvert.t(0.150000006f))
    data_2727b80 = fconvert.s(fconvert.t(200f))
    long double x87_r7_2 = fconvert.t(0.52359879016876221)
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7_2)
    void* eax_2 = data_27e7fd0
    data_2727b74 = fconvert.s(fconvert.t(fconvert.s(x87_r7_2)))
    data_2727b78 = fconvert.s(float.t(*(eax_2 + 0x18)) / float.t(*(eax_2 + 0x14)))
    data_2727bac = *(sub_510a30() + 0x4cc)
    data_2727bb4 = *(sub_510a30() + 0x4cc)
    return sub_5752b0(0)
}
