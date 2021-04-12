# Copyright 2021 NVIDIA Corporation
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

import numpy as np

import legate.numpy as lg


def test():

    # np.random.seed(42)
    # anp = np.array([1, 54, 4 , 4, 0, 45, 5, 58, 0, 9, 0, 4, 0, 0, 0, 5, 0])
    # a = lg.array(anp)
    # assert(lg.array_equal(np.where(anp), lg.where(a)))

    # cnp = np.array([1, 54, 4 , 4, 0, 45, 5, 58, 0, 9, 0, 4, 0, 0, 0, 5, 0, 1]).reshape((6,3)) # noqa E501
    # c = lg.array(cnp)
    # bnp = np.random.randn(6,3)
    # b = lg.array(bnp)
    # assert(lg.array_equal(lg.extract(c, b), np.extract(cnp, bnp)))

    anp = np.array([[True, False], [True, True]])
    xnp = np.array([[1, 2], [3, 4]])
    ynp = np.array([[9, 8], [7, 6]])
    a = lg.array(anp)
    x = lg.array(xnp)
    y = lg.array(ynp)
    assert np.array_equal(np.where(anp, xnp, ynp), lg.where(a, x, y))


if __name__ == "__main__":
    test()
